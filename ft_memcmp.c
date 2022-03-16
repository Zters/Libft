/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:37:47 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/10 22:52:35 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*tmp_s1;
	unsigned const char	*tmp_s2;

	tmp_s1 = (unsigned const char *)s1;
	tmp_s2 = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}
// Byte dizesini karşılaştır
/*
#include <stdio.h>
#include <string.h>
int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = memcmp(cp1, cp2, 10);

    if(ret<0) printf("cp1 < cp2 ");
    else if(ret>0) printf("cp2 < cp1 ");
    else printf("cp1 = cp2");

    return 0;
}
*/
