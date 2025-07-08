/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:07:24 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/08 13:25:51 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **tmp_array)
{
	int	i;

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

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
