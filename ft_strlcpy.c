/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:03:28 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/22 18:20:32 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	idx;
	size_t	count;

	idx = 0;
	count = 0;
	while (src[count])
		count++;
	while (src[idx] && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (size)
	dest[idx] = '\0';
	return (count);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
char a[] = "BILGISAYAR";
const char b[] = "MAHMUT";
printf("%zu\n%s\n%s", ft_strlcpy(a, b, 5),a, b);
return(0);
}
*/