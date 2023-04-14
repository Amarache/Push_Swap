/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:09:09 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/08 13:24:35 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **one)
{
	t_list	*tmp;

	tmp = ft_lstlast(*one);
	tmp->next = *one;
	while ((*one)->next != tmp)
		*one = (*one)->next;
	(*one)->next = NULL;
	*one = tmp;
	write(1, "rra\n", 4);
}

void	rrb(t_list **two)
{
	t_list	*tmp;

	tmp = ft_lstlast(*two);
	tmp->next = *two;
	while ((*two)->next != tmp)
		*two = (*two)->next;
	(*two)->next = NULL;
	*two = tmp;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **one, t_list **two)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = ft_lstlast(*one);
	tmp->next = *one;
	while ((*one)->next != tmp)
		*one = (*one)->next;
	(*one)->next = NULL;
	*one = tmp;
	tmp2 = ft_lstlast(*two);
	tmp2->next = *two;
	while ((*two)->next != tmp2)
		*two = (*two)->next;
	(*two)->next = NULL;
	*two = tmp2;
	write(1, "rrr\n", 4);
}
