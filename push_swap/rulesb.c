/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulesb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:53:46 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 16:17:34 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stacklist **lst)
{
	int	temp;

	write (1, "sb\n", 3);
	temp = (*lst)-> next -> content;
	(*lst)-> next -> content = (*lst)->content;
	(*lst)-> content = temp;
}

void	pb(t_stacklist **lsta, t_stacklist **lstb)
{
	t_stacklist	*temp;

	write (1, "pb\n", 3);
	temp = (*lsta)-> next;
	ft_listadd_front(lstb, *lsta);
	(*lsta) = temp;
}

void	rb(t_stacklist **lstb)
{
	t_stacklist	*frontlist;
	t_stacklist	*backlist;

	write (1, "rb\n", 3);
	frontlist = (*lstb)-> next;
	backlist = ft_lstlast(*lstb);
	backlist -> next = (*lstb);
	(*lstb)-> next = NULL;
	(*lstb) = frontlist;
}

void	rrb(t_stacklist **lstb)
{
	t_stacklist	*lastlist;
	t_stacklist	*temp;
	int			i;

	write (1, "rrb\n", 4);
	temp = *lstb;
	i = ft_lstlast(*lstb)-> content;
	while (temp -> next -> next != NULL)
		temp = temp -> next;
	free(ft_lstlast(*lstb));
	temp -> next = NULL;
	lastlist = malloc(sizeof(t_stacklist));
	lastlist -> content = i;
	lastlist -> next = *lstb;
	*lstb = lastlist;
}
