/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:37:52 by hkok              #+#    #+#             */
/*   Updated: 2022/02/17 02:28:41 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*adst;
	unsigned char		*asrc;

	i = 0;
	adst = (unsigned char *)dst;
	asrc = (unsigned char *)src;
	if (!adst && !asrc)
		return (0);
	while (i < n)
	{
		adst[i] = asrc[i];
		i++;
	}
	return (dst);
}
