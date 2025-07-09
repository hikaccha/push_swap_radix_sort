/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:07:46 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/09 20:41:42 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort_three(t_stack **head)
{
	int	biggest;

	biggest = find_biggest(head);
	if ((*head)->index == biggest)
		ra(head);
	else if ((*head)->next->index == biggest)
		rra(head);
	if ((*head)->index > (*head)->next->index)
		sa(head);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	pushed_count;

	size = count_nodes(*stack_a);
	pushed_count = 0;
	while (size-- > 0)
	{
		if ((*stack_a)->index == 1 || (*stack_a)->index == 2)
		{
			pb(stack_a, stack_b);
			pushed_count++;
		}
		else
			ra(stack_a);
	}
	sort_three(stack_a);
	while (pushed_count-- > 0)
		pa(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	biggest_nbr;
	int	max_bits;
	int	size;
	int	i;

	biggest_nbr = find_biggest(stack_a);
	max_bits = find_bits(biggest_nbr);
	size = count_nodes(*stack_a);
	i = 0;
	while (i < max_bits)
	{
		radix_bit_process(stack_a, stack_b, i, size);
		i++;
	}
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = count_nodes(*stack_a);
	if (!sorted(stack_a) && size <= 3)
		sort_three(stack_a);
	else if (!sorted(stack_a) && size <= 5)
		sort_five(stack_a, stack_b);
	else if (!sorted(stack_a) && size > 5)
		radix_sort(stack_a, stack_b);
}
