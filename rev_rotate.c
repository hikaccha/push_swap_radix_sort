/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:38:03 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/17 22:10:01 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_stack **head)
{
	t_stack	*prev_last;
	t_stack	*new_last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	prev_last = *head;
	while (prev_last->next != NULL)
	{
		new_last = prev_last;
		prev_last = prev_last->next;
	}
	prev_last->next = *head;
	new_last->next = NULL;
	*head = prev_last;
}

void	rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	write(1, "rrr\n", 4);
}
