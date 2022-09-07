/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rulesa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:10:38 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 16:19:57 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacklist **lst)
{
	int	temp;

	write (1, "sa\n", 3);
	temp = (*lst)->next -> content;
	(*lst)->next -> content = (*lst)-> content;
	(*lst)->content = temp;
}

void	pa(t_stacklist **lsta, t_stacklist **lstb)
{
	t_stacklist	*temp;

	write (1, "pa\n", 3);
	temp = NULL;
	temp = (*lstb)-> next;
	ft_listadd_front(lsta, *lstb);
	(*lstb) = temp;
}

void	ra(t_stacklist **lsta)
{
	t_stacklist	*frontlist;
	t_stacklist	*backlist;

	write (1, "ra\n", 3);
	frontlist = (*lsta)-> next;
	backlist = ft_lstlast(*lsta);
	backlist -> next = (*lsta);
	(*lsta)-> next = NULL;
	(*lsta) = frontlist;
}

void	rra(t_stacklist **lsta)
{
	t_stacklist	*lastlist;
	t_stacklist	*temp;
	int			i;

	write (1, "rra\n", 4);
	temp = *lsta;
	i = ft_lstlast((*lsta))-> content;
	while (temp -> next -> next != NULL)
		temp = temp -> next;
	free(ft_lstlast(*lsta));
	temp -> next = NULL;
	lastlist = malloc(sizeof(t_stacklist));
	lastlist -> content = i;
	lastlist -> next = *lsta;
	*lsta = lastlist;
}
