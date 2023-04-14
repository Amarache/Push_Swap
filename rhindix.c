/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rhindix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:51:27 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/11 12:10:08 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tab_in_list(t_list **a, int *indextab)
{
	int		i;
	t_list	*dupli;

	dupli = *a;
	i = 0;
	while (*a)
	{
		(*a)->content = indextab[i];
		*a = (*a)->next;
		i++;
	}
	*a = dupli;
	free(indextab);
}

void	get_tab(t_list **one)
{
	int	*indextab;

	indextab = malloc(sizeof(int) * (ft_lstsize(*one)));
	if (!indextab)
	{
		free(indextab);
		return ;
	}
	get_index_in_tab(one, indextab);
}

void	*get_index_in_tab(t_list **one, int *indextab)
{
	int		i;
	int		index;
	t_list	*dupli;
	t_list	*tmp;

	dupli = *one;
	tmp = *one;
	i = 0;
	while (dupli)
	{
		tmp = *one;
		index = 0;
		while (tmp)
		{
			if (dupli->content > tmp->content)
				index++;
			tmp = tmp->next;
		}
		indextab[i] = index;
		dupli = dupli->next;
		i++;
	}
	tab_in_list(one, indextab);
	return (0);
}

void	rhindix(t_list **one, t_list **two)
{
	int		j;
	int		size;
	int		i;
	t_list	*num;

	i = 0;
	size = ft_lstsize(*one);
	get_tab(one);
	while (sort_check(*one))
	{
		j = 0;
		while (j < size)
		{
			num = (*one);
			if (((num->content >> i) & 1) == 1)
				ra(one);
			else
				pb(one, two);
			j++;
		}
		while (ft_lstsize(*two) != 0)
			pa(one, two);
		i++;
	}
}
