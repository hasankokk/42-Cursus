/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:37:24 by hkok              #+#    #+#             */
/*   Updated: 2022/02/17 02:28:04 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*qw;
	t_list	*qe;

	qw = NULL;
	while (lst)
	{
		qe = ft_lstnew(f(lst -> content));
		if (!qe)
		{
			ft_lstclear(&qw, del);
			return (NULL);
		}
		ft_lstadd_back(&qw, qe);
		lst = lst -> next;
	}
	return (qw);
}
