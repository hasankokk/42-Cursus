/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:39:17 by hkok              #+#    #+#             */
/*   Updated: 2022/02/17 02:30:39 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (find[0] == '\0')
		return ((char *)s);
	while (s[h] != '\0')
	{
		n = 0;
		while (s[h + n] == find[n] && (h + n) < len)
		{
			if (s[h + n] == '\0' && find[n] == '\0')
				return ((char *)& s[h]);
			n++;
		}
		if (find[n] == '\0')
			return ((char *)s + h);
		h++;
	}
	return (0);
}
