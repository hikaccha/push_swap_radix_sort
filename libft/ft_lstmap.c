/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 04:04:17 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/17 16:24:13 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//t_list	*ft_lstnew(void *content)
//{
//	t_list	*new_node;
//
//	new_node = (t_list *)malloc(sizeof(t_list));
//	if (!new_node)
//		return (NULL);
//	new_node->content = content;
//	new_node->next = NULL;
//	return (new_node);
//}
//
//void	ft_lsclear(t_list **lst, void (*del)(void *))
//{
//	t_list	*tmp;
//
//	while (*lst)
//	{
//		tmp = (*lst)->next;
//		del((*lst)->content);
//		free(*lst);
//		*lst = tmp;
//	}
//	*lst = NULL;
//}

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
