/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:59:29 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/05 00:22:30 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_list(int argc, char **argv)
{
    t_stack *stack_a;
    char    **tmp;
    int i;

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
        insert_node(&stack_a, ft_atoi(tmp[i]));
        i++;
    }
    if (argc == 2)
        ft_free(tmp);
    return (stack_a);
}