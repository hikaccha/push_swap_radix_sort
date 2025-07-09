/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 22:43:36 by ichikawahik       #+#    #+#             */
/*   Updated: 2025/07/09 20:21:47 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char **tmp_array, int argc)
{
	write(2, "Error\n", 6);
	if (argc == 2)
		ft_free(tmp_array);
	exit(1);
}

int	count_arg(char **argv)
{
	int	len;

	len = 0;
	while (argv[len])
		len++;
	return (len);
}

int	check_doubles(char **argv)
{
	int		i;
	int		j;
	int		len;
	long	val_i;
	long	val_j;

	i = 0;
	len = count_arg(argv);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			val_i = ft_atoi(argv[i]);
			val_j = ft_atoi(argv[j]);
			if (val_i == LONG_MIN || val_j == LONG_MIN)
				return (1);
			if (val_i == val_j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_nbr(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
	{
		i++;
		if (!argv[i])
			return (0);
	}
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_input(int argc, char **argv)
{
	int		i;
	long	tmp_argv;
	char	**tmp_array;

	i = 0;
	if (argc == 2)
		tmp_array = ft_split(argv[1], ' ');
	else
		tmp_array = argv + 1;
	while (tmp_array[i])
	{
		if (!check_nbr(tmp_array[i]))
			error_exit(tmp_array, argc);
		tmp_argv = ft_atoi(tmp_array[i]);
		if (tmp_argv == LONG_MIN)
			error_exit(tmp_array, argc);
		if (tmp_argv < INT_MIN || tmp_argv > INT_MAX)
			error_exit(tmp_array, argc);
		if (check_doubles(tmp_array))
			error_exit(tmp_array, argc);
		i++;
	}
	if (argc == 2)
		ft_free(tmp_array);
}
