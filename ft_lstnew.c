/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyanar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:55:59 by tyanar            #+#    #+#             */
/*   Updated: 2022/01/23 22:58:27 by tyanar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*t_new;

	t_new = malloc(sizeof(t_list));
	if (!t_new)
		return (NULL);
	t_new->content = content;
	t_new->next = NULL;
	return (t_new);
}
