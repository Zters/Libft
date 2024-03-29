/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:01:15 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/22 17:39:28 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
void yazdir(unsigned int a, char *b)
{
    // a += 1;
    // while (a > 0)
    //     printf("%d - %s\n", a--, b);

    if (*b != ' ')
        printf("%s\n", b);
    else
        printf("Data boşlukla başlıyor\n");
}
#include <stdio.h>
int main()
{
    void (*f)(unsigned int a, char *b) = &yazdir;
    ft_striteri("Ali veli", f);
}
*/