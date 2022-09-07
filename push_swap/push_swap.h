/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:46:48 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 16:21:57 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stacklist
{
	int					content;
	int					index;
	struct s_stacklist	*next;
}t_stacklist;

t_stacklist	*to_int(char **str, int ac);
t_stacklist	*ft_lstlast(t_stacklist *lst);
t_stacklist	*ft_lsthere(t_stacklist *lst, int c);

size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);

char		**ft_split(const char *s, char c);

void		ft_listadd_front(t_stacklist **lst, t_stacklist *new);
void		five_arr(t_stacklist **stack, t_stacklist **b_tank);
void		intadd(t_stacklist **stack, int data);
void		three_arr(t_stacklist **stack);
void		big_arr(t_stacklist **a_tank, t_stacklist **b_tank, int len, int i);
void		index_push(t_stacklist(*stack));

int			big_index(t_stacklist *stack);
int			min_index(t_stacklist *stack);
int			different(t_stacklist *stack);
int			check_arr(t_stacklist *stack);
int			is_number(char **str, int ac);
int			ft_lstsize(t_stacklist *lst);
int			ft_atoi(char *argv);
int			ft_lstdata(t_stacklist *lst, int i);

/*rules*/

void		rrr(t_stacklist **lista, t_stacklist **listb);
void		rr(t_stacklist **lista, t_stacklist **listb);
void		pa(t_stacklist **lstb, t_stacklist **lsta);
void		pb(t_stacklist **lsta, t_stacklist **lstb);
void		ss(t_stacklist *lista, t_stacklist *listb);
void		rra(t_stacklist **lsta);
void		rrb(t_stacklist **lstb);
void		ra(t_stacklist **lsta);
void		rb(t_stacklist **lstb);
void		sa(t_stacklist **lst);
void		sb(t_stacklist **lst);
void		free_stack(t_stacklist *stack);

#endif
