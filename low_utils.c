/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:34:02 by yamarach          #+#    #+#             */
/*   Updated: 2023/01/28 17:50:29 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lowest_to_b(t_list **head_a, t_list **head_b)
{
	int	size;

	size = ft_lstsize(*head_a);
	while (ft_get_lowest(*head_a))
	{
		if (ft_get_lowest(*head_a) <= size / 2)
			ra(head_a);
		else
			rra(head_a);
	}
	pb(head_a, head_b);
}

void	highest_to_b(t_list **head_a, t_list **head_b)
{
	int	size;

	size = ft_lstsize(*head_a);
	while (ft_get_highest(*head_a))
	{
		if (ft_get_highest(*head_a) <= size / 2)
			ra(head_a);
		else
			rra(head_a);
	}
	pb(head_a, head_b);
}
