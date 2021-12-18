/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 10:37:16 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 00:34:12 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*skip_space(char *str);

int	ft_atoi(char *str)
{
	int	sum;
	int	prefix;

	prefix = 1;
	sum = 0;
	str = skip_space(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			prefix *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = (sum * 10) + (*str - '0');
		str++;
	}
	return (prefix * sum);
}

char	*skip_space(char *str)
{
	while (*str <= ' ')
	{
		str++;
	}
	return (str);
}
