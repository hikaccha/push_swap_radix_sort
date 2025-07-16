/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:31:02 by hichikaw          #+#    #+#             */
/*   Updated: 2025/07/13 19:43:09 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	target;
	char	*last_occurrence;

	target = (char)c;
	last_occurrence = NULL;
	while (*s != '\0')
	{
		if (*s == target)
			last_occurrence = (char *)s;
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (last_occurrence);
}
