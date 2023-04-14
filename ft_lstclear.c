/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:17:37 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/25 10:47:10 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		(*lst) = (*lst)->next;
		temp->content = 0;
		free(temp);
		temp = NULL;
	}
	return (0);
}
