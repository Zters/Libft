/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:59:54 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/19 11:34:03 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s)
		return (NULL);
	result = (char *)malloc(ft_strlen((char *)s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	deneme1(unsigned int a, char b)
{
	if (a % 2 == 0)
		return (b);
	else if (b > 96 && 123 > b)
		return (b - 32);
	else if (b > 64 && 91 > b)
		return (b + 32);
	else
		return (b);
}
/*
int main()
{
    char (*f)(unsigned int a, char b) = &deneme1;
    printf("%s", ft_strmapi("Ali veli", f));
}
*/
