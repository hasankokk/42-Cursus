/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:38:52 by hkok              #+#    #+#             */
/*   Updated: 2022/02/22 06:40:14 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	q;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	q = ft_strlen(dst);
	if (dstsize <= sizedst)
		return (dstsize + sizesrc);
	i = 0;
	while (src[i] != '\0' && q < dstsize - 1)
	{
		dst[q] = src[i];
		q++;
		i++;
	}
	dst[q] = '\0';
	return (sizedst + sizesrc);
}
