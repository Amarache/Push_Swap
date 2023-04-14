/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach@student.42.com <yamarach>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:39:05 by yamarach@st       #+#    #+#             */
/*   Updated: 2022/11/01 11:39:05 by yamarach@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoi(const char *str)
{
	long long	i;
	long long	res;
	int			signe;

	i = 0;
	res = 0;
	signe = 1;
	if (!str)
		return (0);
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i++] == '-')
				signe = -1;
		}
		while (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + str[i++] - 48;
		return (res * signe);
	}
	return (0);
}
