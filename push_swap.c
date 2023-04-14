/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:09:24 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/09 10:47:45 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(t_list **one, t_list **two)
{
	if (sort_check(*one))
	{
		if (ft_lstsize(*one) == 2)
			sa(one);
		else if (ft_lstsize(*one) == 3)
			little(one);
		else if (ft_lstsize(*one) == 4)
			four(one, two);
		else if (ft_lstsize(*one) == 5)
			mid(one, two);
		if (ft_lstsize(*one) > 5)
			rhindix(one, two);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*one;
	t_list	*two;

	if (ac == 2)
	{
		if (!checkint(av[1]))
			write(1, "Error\n", 6);
		if ((ft_atoi(av[1]) > 2147483647 || ft_atoi(av[1]) < -2147483648))
			write(1, "Error\n", 6);
	}
	if (ac > 2)
	{
		two = NULL;
		one = init(ac, av);
		if (!one)
			return (0);
		if (!sort_check(one))
			return (ft_lstclear(&one), 0);
		push_swap(&one, &two);
		ft_lstclear(&one);
		ft_lstclear(&two);
	}
	return (0);
}
