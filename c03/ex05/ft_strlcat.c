/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:25:34 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/15 23:18:25 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	my_strlen(char *c);
unsigned int	my_strnlen(char *c, int n);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	n;
	unsigned int	i;

	l = my_strlen(src);
	n = my_strnlen(dest, size);
	if (n == size)
		return (n + l);
	i = n;
	while (i < size && *src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	if (size <= n + l)
		dest[i - 1] = '\0';
	else
		dest[i] = '\0';
	return (n + l);
}

unsigned int	my_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

unsigned int	my_strnlen(char *c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (!*c)
			break ;
		i++;
		c++;
	}
	return (i);
}
