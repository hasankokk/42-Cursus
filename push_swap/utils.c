/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:45:04 by hkok              #+#    #+#             */
/*   Updated: 2022/09/06 13:17:12 by hkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

int	ft_atoi(char *argv)
{
	int				i;
	int				is_negative;
	unsigned long	number;

	i = 0;
	number = 0;
	is_negative = 1;
	while (argv[i] == '\n' && argv[i] == ' ')
		i++;
	if (argv[i] == '-')
		is_negative *= -1;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		number = (number * 10) + (argv[i] - '0');
		i++;
	}
	if ((number > 2147483647 && is_negative != -1)
		|| (number > 2147483648 && is_negative == -1))
	{
		write (2, "Error\n", 6);
		exit(0);
	}
	return (number * is_negative);
}
