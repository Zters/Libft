/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:18:47 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 13:46:09 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		idx;
	size_t		src_idx;
	size_t		value;

	if (!size)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	idx = ft_strlen(dest);
	src_idx = 0;
	while (src[src_idx] && idx < size - 1)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return (value);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[] = "ALI";
	const char b[] = "VELI";
	printf("%zu\n%s\n%s", ft_strlcat(a, b, 4),a, b);	
	return(0);
}
*/