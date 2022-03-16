/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:32:31 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/22 18:28:57 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == (char)c)
			return ((char *)(s + i));
	return (NULL);
}
// Reverse control 
/*
#include <stdio.h>
#include "libft.h"
int main(void)
{
const char a[] = "BILGISAYAR";
char *b;
b = ft_strrchr((char *)a, 'A');
printf("%s", b);
return(0);
}
*/
