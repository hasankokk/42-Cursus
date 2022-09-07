/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:05:38 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 15:38:31 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stacklist *lista, t_stacklist *listb)
{
	write (1, "ss\n", 3);
	sa(&lista);
	sb(&listb);
}

void	rr(t_stacklist **lista, t_stacklist **listb)
{
	write (1, "rr\n", 3);
	ra(lista);
	rb(listb);
}

void	rrr(t_stacklist **lista, t_stacklist **listb)
{
	write (1, "rrr\n", 4);
	rra(lista);
	rrb(listb);
}
