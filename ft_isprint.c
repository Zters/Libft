/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:57:23 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 14:29:31 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = ' ';
	printf("%c %d", a ,ft_isprint(a));
	return(0);
}
*/
// Printig character test (space character inclusive)
// ascii values 
// 32 = sp 
// 126 = ~
// if it is an printable character "1"
// if it is not an printable character "0"
/*
int main(void)
{
printf("%d", ft_isprint(32));
return(0);
}
*/
