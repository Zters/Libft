/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:18:56 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/14 19:19:48 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		idx;

	if (!s)
		return ;
	idx = 0;
	while (s[idx])
	{
		ft_putchar_fd(s[idx], fd);
		idx++;
	}
}