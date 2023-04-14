/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:32:12 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/08 13:21:07 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	little(t_list **one)
{
	int	first;
	int	second;
	int	third;

	first = (*one)->content;
	second = (*one)->next->content;
	third = (*one)->next->next->content;
	if (first > second && second > third && third < first)
	{
		ra(one);
		sa(one);
	}
	else if (first < second && second > third && third > first)
	{
		rra(one);
		sa(one);
	}
	else if (first < second && second > third && third < first)
		rra(one);
	else if (first > second && second < third && third < first)
		ra(one);
	else if (first > second && second < third && third > first)
		sa(one);
}

void	four(t_list **one, t_list **two)
{
	lowest_to_b(one, two);
	little(one);
	pa(one, two);
}

void	mid(t_list **one, t_list **two)
{
	lowest_to_b(one, two);
	lowest_to_b(one, two);
	little(one);
	pa(one, two);
	pa(one, two);
}
