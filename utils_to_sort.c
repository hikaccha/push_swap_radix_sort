/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_to_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:42:39 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/08 13:05:19 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_stack **head)
{
	int		biggest;
	t_stack	*tmp;

	biggest = INT_MIN;
	tmp = head;
	while (tmp)
	{
		if (tmp->index > biggest)
			biggest = tmp->index;
		tmp = tmp->next;
	}
	return (biggest);
}

int	find_bits(int biggest_nbr)
{
	int	max_bits;

	max_bits = 0;
	while (biggest_nbr > 0)
	{
		biggest_nbr = biggest_nbr >> 1;
		max_bits++;
	}
	return (max_bits);
}
