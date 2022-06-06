/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 04:27:23 by hkok              #+#    #+#             */
/*   Updated: 2022/03/04 03:07:40 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char		*str;
	char			*cizgi;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = retake(fd, str);
	if (!str)
		return (NULL);
	cizgi = yeni_sat(str);
	str = new_str(str);
	return (cizgi);
}

#include <stdio.h>

int main()
{
	int fd = open("oku.txt", 0);
	printf("%s", get_next_line(fd));
	return 0;
}
