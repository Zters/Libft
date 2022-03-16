/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:27:27 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/16 12:50:30 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)

{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// alphabetic character test..
// ascii values 
// 65 = A
// 90 = Z 
// 97 = a
// 122 = z
// if it is an alphabetich character "1"
// if it is not an alphabetic character "0"

/*
 int main(void)
 {
 printf("%d", ft_isalpha('a'));
 return(0);
 }
*/
