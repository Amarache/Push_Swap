/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:33:02 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/08 13:27:37 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **one, t_list **two)
{
	t_list	*tmp;

	if (*two == NULL)
		return ;
	tmp = (*two);
	*two = (*two)->next;
	tmp->next = *one;
	*one = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_list **one, t_list **two)
{
	t_list	*tmp;

	if (*one == NULL)
		return ;
	tmp = (*one);
	*one = (*one)->next;
	tmp->next = *two;
	*two = tmp;
	write(1, "pb\n", 3);
}
