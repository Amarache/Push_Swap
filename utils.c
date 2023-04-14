/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:55:17 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/08 13:24:41 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_lowest(t_list *list)
{
	int		i[2];
	int		low;
	t_list	*tmp;

	tmp = list;
	low = list->content;
	*(long *)i = 0;
	while (list)
	{
		if (list)
		{
			if (low > list->content)
			{
				low = list->content;
				i[1] = i[0];
			}
		}
		list = list->next;
		i[0]++;
	}
	list = tmp;
	return (i[1]);
}

int	ft_get_highest(t_list *list)
{
	int	i[2];
	int	hight;

	hight = list->content;
	*(long *)i = 0;
	while (list)
	{
		if (list)
		{
			if (hight < list->content)
			{
				hight = list->content;
				i[1] = i[0];
			}
		}
		list = list->next;
		i[0]++;
	}
	return (i[1]);
}

int	sort_check(t_list *pile)
{
	if (!pile)
		return (0);
	while (pile && pile->next)
	{
		if (pile->content > pile->next->content)
			return (1);
		else
			pile = pile->next;
	}
	return (0);
}
