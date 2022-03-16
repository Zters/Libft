/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:42:04 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 14:46:23 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// compare strings
// Dizileri karşılaştırır
// ciktida g harfinin ascii degerini verecek 
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	const char a[] = "BILGISAYAR";
	const char b[] = "BIL";
	printf("%d", ft_strncmp(a, b, 4));
	return(0);
}
*/
