/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:57:12 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/08 13:24:38 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **one)
{
	int	tmp;

	if (*one == NULL || (*one)->next == NULL)
		return ;
	tmp = (*one)->content;
	(*one)->content = (*one)->next->content;
	(*one)->next->content = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_list **two)
{
	int	tmp;

	if (*two == NULL || (*two)->next == NULL)
		return ;
	tmp = (*two)->content;
	(*two)->content = (*two)->next->content;
	(*two)->next->content = tmp;
	write(1, "sa\n", 3);
}

void	ss(t_list **one, t_list **two)
{
	sa(one);
	sb(two);
}
