/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:55:49 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 13:48:50 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
// Upper case to lower case letter conversion
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char a = 'A';
	printf("%c%c", a, ft_tolower(a));
	return(0);
}
*
*/
