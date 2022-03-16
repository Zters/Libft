/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:54:49 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/19 11:48:00 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ddest;
	unsigned char	*ssrc;

	ddest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (!n || dest == src)
		return (dest);
	if (dest < src)
		while (n--)
			*ddest++ = *ssrc++;
	else
		while (n--)
			ddest[n] = ssrc[n];
	return (dest);
}
/*
// Copy byte string 
#include <stdio.h>
int main()
{
char dizi[] = "denemeeeeeeeeeeeeeeeeeeee";
const char dizi2[] = "UUUUUUUUUU";
ft_memmove (dizi,dizi2 ,4);
printf("\n%s", dizi);
return(0);
}
*/
