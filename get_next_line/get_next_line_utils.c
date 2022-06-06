/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 04:27:17 by hkok              #+#    #+#             */
/*   Updated: 2022/03/01 04:27:19 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s)
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' || c == '\0')
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *str, char *dash)
{
	char	*str2;
	int		i;
	int		j;

	if (!str)
	{
		str = malloc(1);
		str[0] = '\0';
	}
	str2 = malloc(sizeof(char) * ((ft_strlen(str) + ft_strlen(dash)) + 1));
	i = -1;
	j = 0;
	if (str)
		while (str[++i] != '\0')
			str2[i] = str[i];
	while (dash[j] != '\0')
		str2[i++] = dash[j++];
	str2[ft_strlen(str) + ft_strlen(dash)] = '\0';
	free (str);
	return (str2);
}

char	*yeni_sat(char *str)
{
	char	*yeni_sat;
	int		i;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	yeni_sat = (char *)malloc(sizeof(char) * (i + 2));
	if (!yeni_sat)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		yeni_sat[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		yeni_sat[i++] = '\n';
	yeni_sat[i] = '\0';
	return (yeni_sat);
}

char	*new_str(char *str)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!new_str)
		return (NULL);
	j = 0;
	while (str[i++])
		new_str[j++] = str[i];
	new_str[j] = '\0';
	free(str);
	return (new_str);
}
