/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:18:13 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/05 00:09:47 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
} t_stack;

t_stack *init_list(int argc, char **argv);

#endif
