/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:07:24 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/17 17:42:33 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **tmp_array)
{
	int	i;

	if (!tmp_array)
		return ;
	i = 0;
	while (tmp_array[i])
	{
		free(tmp_array[i]);
		i++;
	}
	free(tmp_array);
}

void	free_stack(t_stack **head)
{
	t_stack	*tmp;

	if (!head || !*head)
		return ;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
