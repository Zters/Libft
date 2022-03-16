/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:45:56 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 14:50:06 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	cc;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *)(ss + i));
		i++;
	}
	return (NULL);
}
// Locate byte in byte string
// B'nin hafızada ki adresini yazdıracak  
/*
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)(s + i));
        i++;
    }
    return (0);
} 
 */
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *cp = "BIL";
	const char cd = 'B';
	const char cd1 = 'I';
	const char cd2 = 'L';

	printf("%c karater adresi %p\n", cd, ft_memchr(cp, cd, ft_strlen(cp)));
	printf("%c karater adresi %p\n", cd1, ft_memchr(cp, cd1, ft_strlen(cp)));
	printf("%c karater adresi %p\n", cd2, ft_memchr(cp, cd2, ft_strlen(cp)));
	

	return(0);
}
*/