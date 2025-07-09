/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:59:29 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/09 20:22:23 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_stack *head, int link_size)
{
	t_stack	*smallest;
	t_stack	*tmp;
	int		current_index;

	current_index = 0;
	while (current_index < link_size)
	{
		smallest = NULL;
		tmp = head;
		while (tmp)
		{
			if (tmp->index == 0 && (smallest == NULL
					|| tmp->value < smallest->value))
				smallest = tmp;
			tmp = tmp->next;
		}
		if (smallest)
			smallest->index = current_index + 1;
		current_index++;
	}
}

t_stack	*init_list(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**tmp;
	int		i;

	stack_a = NULL;
	i = 0;
	if (argc == 2)
		tmp = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		tmp = argv;
	}
	while (tmp[i])
	{
		insert_last(&stack_a, (int)ft_atoi(tmp[i]));
		i++;
	}
	if (argc == 2)
		ft_free(tmp);
	return (stack_a);
}
