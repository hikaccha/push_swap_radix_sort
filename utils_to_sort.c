/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_to_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:13:12 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/09 20:41:22 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_stack **head)
{
	t_stack	*tmp;
	int		biggest;

	tmp = *head;
	biggest = tmp->index;
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
	int	bits;

	bits = 0;
	while (biggest_nbr > 0)
	{
		biggest_nbr /= 2;
		bits++;
	}
	return (bits);
}

void	radix_bit_process(t_stack **stack_a, t_stack **stack_b,
	int bit, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		if (*stack_a == NULL)
			break ;
		if (((*stack_a)->index >> bit) & 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		j++;
	}
	while (*stack_b)
		pa(stack_a, stack_b);
}
