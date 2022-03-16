/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:02:48 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/23 22:58:48 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	a = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (*s1)
		a[i++] = *(char *)s1++;
	while (*s2)
		a[i++] = *(char *)s2++;
	a[i] = 0;
	return (a);
}
/*
#include <stdio.h>

int main(void)
{
	const char a[] = "ELA";
	const char b[] = "DERYA";
	printf("%s", ft_strjoin(a, b));
	return(0);
}
*/
