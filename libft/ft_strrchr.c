/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:31:02 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/16 02:52:23 by hichikaw         ###   ########.fr       */
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

//#include <string.h>
//#include <stdio.h>
//
//int main(void)
//{
//
//    char test[20] = "123456321";
//    char *p;
//
//    p = strrchr(test,'3');
//
//    printf("検索文字が見つかった場所から表示→%s\n",p);
//
//
//
//    return 0;
//}
