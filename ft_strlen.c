/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 03:09:42 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/21 13:54:29 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s )
{
	size_t	i;

	i = 0;
	while (s[i])
			i++;
	return (i);
}
// Find length of string 
// Finds the length of the character by incermenting the s index one by one 
/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp = "turan";
    int ret;

    ret = strlen(cp);

    printf("%s: %d", cp, ret);

    return 0;
}
*/
