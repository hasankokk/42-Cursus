/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:11:47 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 18:19:05 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_double(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

t_stacklist	*to_int(char **str, int ac)
{
	t_stacklist		*ret;
	int				j;
	char			**args;

	ret = NULL;
	while (--ac > 0)
	{
		j = 0;
		args = ft_split(str[ac], ' ');
		while (args[j])
			j++;
		while (j--)
			intadd(&ret, ft_atoi(args[j]));
		ft_free_double(args);
	}
	return (ret);
}

void	intadd(t_stacklist **stack, int data)
{
	t_stacklist	*temp;

	temp = (t_stacklist *)malloc(sizeof(t_stacklist));
	if (!temp)
		return ;
	temp->content = data;
	temp->next = NULL;
	if (!stack)
	{
		(*stack) = temp;
		return ;
	}
	temp->next = (*stack);
	(*stack) = temp;
}
