/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:04:13 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/22 17:52:11 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char )c)
			return ((char *)s);
		s++;
	}
	if ((char )c == '\0')
		return ((char *)s);
	return (NULL);
}
// Locate character in string
// Dizedeki karakteri bul
/*
#include <stdio.h>
#include "libft.h"
int main(void)
{
	const char a[] = "TURAN";
	char *b;
	b = ft_strchr(a, 'R');
	printf("%s", b);
	return(0);
}
*/
