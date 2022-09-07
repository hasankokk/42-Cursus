/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:06:38 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 15:25:31 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_listadd_front(t_stacklist **lst, t_stacklist *new)
{
	new -> next = *lst;
	*lst = new;
}

t_stacklist	*ft_lstlast(t_stacklist *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

t_stacklist	*ft_lsthere(t_stacklist *lst, int c)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL && i < c)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
}

int	ft_lstsize(t_stacklist *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

int	ft_lstdata(t_stacklist *lst, int c)
{
	int	data;
	int	i;

	i = 0;
	while (i <= c && lst != NULL)
	{
		data = lst -> content;
		lst = lst -> next;
		i++;
	}
	return (data);
}
