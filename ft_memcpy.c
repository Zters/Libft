/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 03:47:07 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/19 11:48:29 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (dst == src || !n)
		return (dst);
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
		*str1++ = *str2++;
	return (dst);
}
/*
 void *ft_memcpy(void *dst, const void *src, size_t n)
{
	if(dst == src || !n)
		return(0);
		while(n-- > 0)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	return(0);
}
*/
/*
//baba tek tek üstüne yazıyor işte 
//dizi1 turan 
//diz2 deneme
//cıktımız denan
#include <stdio.h>
#include <string.h>
int main( void )
{
    char dizi1[] = "TURAN";
 const	char dizi2[] = "denem";
	printf("%s\n", dizi1);
		 ft_memcpy(dizi1 , dizi2, 1);
 		printf("%s\n", dizi1);
		ft_memcpy(dizi1 , dizi2, 2);
		printf("%s\n", dizi1);
		ft_memcpy(dizi1 , dizi2, 3);
 		printf("%s\n", dizi1);
		 ft_memcpy(dizi1 , dizi2, 4);
 		printf("%s\n", dizi1);
		 ft_memcpy(dizi1 , dizi2, 5);
		printf("%s", dizi1); 		


    return 0;
}
*/
