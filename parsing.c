/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:24:35 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/09 10:48:39 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkint(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] == '-')))
			return (0);
		i++;
	}
	return (1);
}

int	*ft_tabint(int ac, char **av)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * ac);
	if (!tab)
		return (NULL);
	i = 1;
	while (av[i])
	{
		if (!(checkint(av[i]))
			|| (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648))
		{
			write(2, "Error\n", 6);
			return (free(tab), (NULL));
		}
		i++;
	}
	i = 1;
	j = 0;
	while (av[i])
		tab[j++] = ft_atoi(av[i++]);
	tab[j] = '\0';
	return (tab);
}

t_list	*add(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*golist(int ac, int *tab)
{
	int		i;
	t_list	*one;
	t_list	*tmp;

	one = NULL;
	tmp = NULL;
	i = 0;
	while (i < ac - 1)
	{
		if (one == NULL)
		{
			one = add(tab[i++]);
			tmp = one;
		}
		tmp->next = add(tab[i++]);
		tmp = tmp->next;
	}
	return (one);
}

int	if_duplilist(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->content == tmp->content)
			{
				return (0);
			}
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (1);
}
