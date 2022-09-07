/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:16:54 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 18:40:21 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stacklist *stack)
{
	t_stacklist	*temp;

	while (stack)
	{
		temp = stack;
		free(temp);
		stack = stack->next;
	}
}

t_stacklist	*pushswap(char **str, int len)
{
	t_stacklist	*a_tank;
	t_stacklist	*b_tank;

	b_tank = NULL;
	a_tank = to_int(str, len);
	len = ft_lstsize(a_tank);
	index_push(a_tank);
	if (!different(a_tank))
	{
		write (2, "Error\n", 6);
		free_stack(a_tank);
		exit (1);
	}
	if (ft_lstsize(a_tank) == 5)
		five_arr(&a_tank, &b_tank);
	else if (ft_lstsize(a_tank) < 4)
		three_arr(&a_tank);
	big_arr(&a_tank, &b_tank, len, 0);
	free_stack(b_tank);
	free_stack(a_tank);
	return (a_tank);
}

int	main(int argc, char **argv)
{
	if (!is_number(argv, argc))
	{
		write (2, "Error\n", 6);
		exit(1);
	}
	else if (argc > 1)
	{
		pushswap(argv, argc);
		exit(0);
	}
}
