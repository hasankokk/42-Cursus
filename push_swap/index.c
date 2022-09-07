/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:43:06 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 14:59:17 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index(t_stacklist *stack)
{
	int				i;
	int				data;
	t_stacklist		*temp;

	temp = stack;
	data = temp -> content;
	i = 0;
	while (stack != NULL)
	{
		if (data <= stack -> content && stack != NULL)
			stack = stack -> next;
		else
		{
			temp = temp -> next;
			data = temp -> content;
			i++;
		}
	}
	return (i);
}

void	index_push(t_stacklist(*stack))
{
	int	data1;
	int	data2;
	int	i;
	int	k;
	int	indis;

	i = 0;
	while (i < ft_lstsize(stack))
	{
		indis = 0;
		k = 0;
		data1 = ft_lstdata(stack, i);
		while (k < ft_lstsize(stack))
		{
			data2 = ft_lstdata((stack), k);
			if (data1 > data2)
				indis++;
			k++;
		}
		ft_lsthere(stack, i)->index = indis;
		i++;
		if (i == ft_lstsize(stack))
			return ;
	}
}

int	big_index(t_stacklist *stack)
{
	int			i;
	int			data;
	t_stacklist	*temp;

	temp = stack;
	data = temp -> content;
	i = 0;
	while (stack != NULL)
	{
		if (data >= stack -> content && stack != NULL)
			stack = stack -> next;
		else
		{
			temp = temp -> next;
			data = temp -> content;
			i++;
		}
	}
	return (i);
}
