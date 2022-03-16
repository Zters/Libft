/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:52:40 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/19 18:52:16 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_digitnum(int n)
{
	int	count;

	count = !n;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		sign;

	sign = n < 0;
	len = ft_digitnum(n) + sign;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (sign)
	{
		result[0] = '-';
		result[--len] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (len-- - sign)
	{
		result[len] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
char a[] = "---123";
printf("%s", ft_itoa(a));
return(0);
}
*/
