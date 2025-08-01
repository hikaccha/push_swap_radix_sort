/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:18:13 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/18 17:10:53 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	ft_free(char **tmp_array);
void	free_stack(t_stack **head);

void	set_index(t_stack *head, int link_size);
t_stack	*init_list(int argc, char **argv);

void	check_input(int argc, char **argv);

int		count_nodes(t_stack *head);
void	insert_tail(t_stack **head, int new_value);

void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);

void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

int		sorted(t_stack **head);
void	sort_three(t_stack **head);
void	sort_five(t_stack **stack_a, t_stack **stack_b, int size);
void	radix_sort(t_stack **stack_a, t_stack **stack_b, int size);
void	sort_stack(t_stack **stack_a, t_stack **stack_b);

void	swap(t_stack **head);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

int		find_biggest(t_stack **head);
int		find_bits(int biggest_nbr);
void	radix_bit_process(t_stack **stack_a, t_stack **stack_b,
			int bit, int size);

void	print_stack(t_stack *stack, char *name);
void	print_both_stacks(t_stack *stack_a, t_stack *stack_b);
void	print_sort_result(t_stack *stack_a);

#endif
