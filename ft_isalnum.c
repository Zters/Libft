/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 02:30:31 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/22 16:40:00 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122));
}
/*/
#include <stdio.h>
#include <ctype.h>

int main(void) 
{
	char c = ' ';
	printf("%c %d", c, ft_iisalnum(c));
 return(0);
}
*/
