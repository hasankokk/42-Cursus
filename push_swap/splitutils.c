/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:02:28 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 13:38:58 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc(i + 1);
	if (dup == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - start;
	if (len < i)
		i = len;
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, i + 1);
	return (str);
}

int	ft_wordcounter(const char *str, char c)
{
	int	i;
	int	c_mi;

	i = 0;
	c_mi = 0;
	while (*str)
	{
		if (*str != c && c_mi == 0)
		{
			c_mi = 1;
			i++;
		}
		else if (*str == c)
			c_mi = 0;
		str++;
	}
	return (i);
}

int	ft_charcounter(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str && (*str != c))
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_split(char const *str, char c)
{
	char	**ret;
	int		retindex;

	retindex = 0;
	if (!str)
		return (0);
	ret = malloc(sizeof(char *) * ft_wordcounter(str, c) + 1);
	if (!ret)
		return (0);
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str == '\0')
			break ;
		ret[retindex] = ft_substr(str, 0, ft_charcounter(str, c));
		retindex++;
		str += ft_charcounter(str, c);
	}
	ret[retindex] = NULL;
	return (ret);
}
