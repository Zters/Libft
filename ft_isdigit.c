/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:16:19 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 14:29:04 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return ((c >= 48 && c <= 57));
}
// decimal-digit character test 
// ascii values 
// 48 = 0
// 57 = 9
// if it is an digit "1"
// if it is not on digit "0"
/*
 int main(void)
 {
 printf("%d", ft_isdigit('9'));
 return(0);
 }
*/
