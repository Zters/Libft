/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:15:25 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/12 19:06:10 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
#include <string.h>


int main( void )
{
    const char *cp1 = "Bilgisayar";
    char *cp2 = ft_strdup(cp1);

    printf("İlk karakter dizisi: %s\n", cp1);
    printf("Benzer olarak oluşturulan karakter dizisi: %s", cp2);

    return 0;
}
*/
