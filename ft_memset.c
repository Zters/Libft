/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 03:20:00 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/21 13:56:15 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	int				i;

	a = (unsigned char *)b;
	i = 0;
	while (len-- > 0)
		a[i++] = c;
	return (b);
}
// Fill a byte string with a byte value 
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dizi[] = "Bilgisyar";
printf("%s\n",dizi);
memset(dizi, 'x', 4);
printf("%s", dizi);
return(0);
}
*/
