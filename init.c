/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:25 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/08 13:59:13 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init(int ac, char **av)
{
	t_list	*pile_a;
	int		*tab;

	pile_a = NULL;
	if (ac >= 2)
	{
		tab = ft_tabint(ac, av);
		if (!tab)
			return (ft_lstclear(&pile_a), NULL);
		pile_a = golist(ac, tab);
		if (tab)
			free(tab);
		if (!if_duplilist(pile_a))
		{
			write(2, "Error\n", 6);
			return (ft_lstclear(&pile_a), NULL);
		}
	}
	return (pile_a);
}
