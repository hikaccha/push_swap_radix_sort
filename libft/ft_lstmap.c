/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 04:04:17 by hichikaw          #+#    #+#             */
/*   Updated: 2025/07/13 19:41:42 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*last;

	new_list = NULL;
	last = new_list;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_node;
		else
		{
			while (last->next)
				last = last->next;
			last->next = new_node;
		}
		lst = lst->next;
	}
	return (new_list);
}
