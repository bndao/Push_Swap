/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bndao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 05:34:17 by bndao             #+#    #+#             */
/*   Updated: 2016/04/14 08:45:05 by bndao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct		s_lst
{
	int				num;
	int				pos;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

void				sa(t_lst *l);
void				sb(t_lst *l);
void				pa(t_lst **a, t_lst **b);
void				pb(t_lst **b, t_lst **a);
void				ra(t_lst *l);
void				rb(t_lst *l);
void				rr(t_lst *a, t_lst *b);
void				rra(t_lst *l);
void				rrb(t_lst *l);
void				rrr(t_lst *a, t_lst *b);
int					sorted(char **av);
int					is_sorted(t_lst *l);
int					min_to_bottom(t_lst *l, int pos_min, int size);
int					max_to_bottom(t_lst *l, int pos_max, int size);

t_lst				*l_new(int n, int pos);
t_lst				*init_lst(int ac, char **av);
t_lst				*swap_loop(t_lst *start);
t_lst				*last_is_first(t_lst *start);
void				push_back_list(t_lst *b_list, t_lst *new);
void				lst_add_front(t_lst **l, t_lst *new);
void				swap_elem_data(t_lst *num1, t_lst *num2);

int					find_min(t_lst *l);
int					find_max(t_lst *l);
int					size_list(t_lst *l);
int					is_number(char *s);
int					args_valid(char **av);
int					repeated(char **av);

#endif
