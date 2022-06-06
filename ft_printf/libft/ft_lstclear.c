/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:37:04 by hkok              #+#    #+#             */
/*   Updated: 2022/02/17 02:27:39 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*qwe;

	if (!lst || !del || !*lst)
		return ;
	while (lst && *lst)
	{
		qwe = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = qwe;
	}
}
