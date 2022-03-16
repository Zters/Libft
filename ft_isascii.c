/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:46:25 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/22 17:43:00 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
 {
    char c = ' ';
      printf("%c %d", c, ft_isascii(c));
  return(0);
 }
 */
// Test for ASCII character 
// ascii values 
// 0 = NULL
// 127 = del
// if it is an ascii values "1"
// if it is not an ascii values "0"
/*
 int main(void)
 {
 printf("%d", ft_ascii(' '));
 }
 */
