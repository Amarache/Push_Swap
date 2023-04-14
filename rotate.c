/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:09:09 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/08 13:24:26 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **one)
{
	t_list	*tmp;

	if (*one == NULL || (*one)->next == NULL)
		return ;
	else
	{
		tmp = *one;
		*one = (*one)->next;
		ft_lstlast(*one)->next = tmp;
		tmp->next = NULL;
		write(1, "ra\n", 3);
	}
}

void	rb(t_list **two)
{
	t_list	*tmp;

	if (*two == NULL || (*two)->next == NULL)
		return ;
	else
	{
		tmp = *two;
		*two = (*two)->next;
		ft_lstlast(*two)->next = tmp;
		tmp->next = NULL;
		write(1, "rb\n", 3);
	}
}

void	rr(t_list **one, t_list **two)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*one == NULL || (*one)->next == NULL)
		return ;
	else
	{
		tmp = *one;
		*one = (*one)->next;
		ft_lstlast(*one)->next = tmp;
		tmp->next = NULL;
		tmp2 = *two;
		*two = (*two)->next;
		ft_lstlast(*two)->next = tmp2;
		tmp2->next = NULL;
		write(1, "rr\n", 3);
	}
}
