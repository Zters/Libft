/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:53:15 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 15:10:50 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t'
		|| str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * s);
}
/*
#include <stdio.h>
int main()
{
    char a[10] = "  -101";
    int value = atoi(a);
    printf("Value = %d\n", value);
    return 0;
}
*/
//convert ASCII string to integer 
// ascii value 
// 48 = 0
// 32 = sp
// \v tab boyutunda boşluk
// \r satır başı =  13
// \n satır besleme = 10
// \t sekmesi = 9
// \f biçim besleme = 12
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char a[] = "-0";
printf("%d", ft_atoi(a));
	   return(0);	
}
*/
