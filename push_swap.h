/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:25:18 by yamarach          #+#    #+#             */
/*   Updated: 2023/02/09 10:49:09 by yamarach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

typedef struct t_list
{
	int				content;
	int				index;
	struct t_list	*next;
}					t_list;

void		sa(t_list **one);
void		sb(t_list **two);
void		ss(t_list **one, t_list **two);
void		pa(t_list **one, t_list **two);
void		pb(t_list **one, t_list **two);
void		ra(t_list **one);
void		rb(t_list **zero);
void		rr(t_list **zero, t_list **two);
void		rra(t_list **one);
void		rrb(t_list **two);
void		rrr(t_list **one, t_list **two);

t_list		*add(int content);
int			*ft_tabint(int ac, char **av);
t_list		*golist(int ac, int *tab);
int			sort_check(t_list *pile);
int			if_duplilist(t_list *lst);
t_list		*init(int ac, char **av);
int			push_swap(t_list **one, t_list **two);
void		little(t_list **one);
void		mid(t_list **one, t_list **two);
void		lowest_to_b(t_list **head_a, t_list **head_b);
void		highest_to_b(t_list **head_a, t_list **head_b);
int			ft_get_lowest(t_list *list);
int			ft_get_highest(t_list *list);
void		four(t_list **one, t_list **two);
int			checkint(char *str);

t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
int			ft_lstclear(t_list **lst);
char		**ft_split(char *s);
long long	ft_atoi(const char *str);

void		tab_in_list(t_list **a, int *indextab);
void		*get_index_in_tab(t_list **pile_a, int *indextab);
void		get_tab(t_list **pile_a);
void		rhindix(t_list **pile_a, t_list **pile_b);

#endif