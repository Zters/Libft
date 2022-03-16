/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:09:37 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/22 17:00:54 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
// Lower case to upper case letter conversion,
// Küçük harften büyük harfe dönüştürme
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
char a = 'a';
printf("%c%c", a ,ft_toupper(a));
return(a);
}
*/
