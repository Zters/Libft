/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:08:41 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/18 16:19:36 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return ((char *)ft_calloc(1, 1));
	size = ft_strlen(s);
	if (size < len)
		len = size;
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
char a[] = "QWERTYUASDFGH";
printf("%s", ft_substr(a, 2, 5 ));
return(0);
}
*/
