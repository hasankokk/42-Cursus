/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 04:26:59 by hkok              #+#    #+#             */
/*   Updated: 2022/03/04 00:06:43 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*retake(int fd, char *str)
{
	char	*dash;
	int		a;

	dash = malloc(BUFFER_SIZE + 1);
	if (!dash)
		return (NULL);
	a = 1;
	while (!ft_strchr(str, '\n') && a != 0)
	{
		a = read(fd, dash, BUFFER_SIZE);
		if (a == -1)
		{
			free(dash);
			return (NULL);
		}
		dash[a] = '\0';
		str = ft_strjoin(str, dash);
	}
	free(dash);
	return (str);
}

char	*get_next_line(int fd)
{
	static char		*str[10000];
	char			*cizgi;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str[fd] = retake(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	cizgi = yeni_sat(str[fd]);
	str[fd] = new_str(str[fd]);
	return (cizgi);
}
