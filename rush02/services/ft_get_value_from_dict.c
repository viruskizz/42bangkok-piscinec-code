/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_value_from_dict.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:14:32 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/12 17:26:34 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/util.h"

int		compare_key(int p, char *str, char *key);
char	*get_value_from_index_key(int p, char *str, char *value);

char	*g_key;

char	*ft_get_value_from_dict(char *str, char *key, char *value)
{
	int		p;

	g_key = key;
	p = 0;
	while (str[p] != '\0')
	{
		if (compare_key(p, str, key) > 0)
			return (get_value_from_index_key(p, str, value));
		while (str[p] != '\n')
			p++;
		p++;
	}
	return (value);
}

int	compare_key(int p, char *str, char *key)
{
	int		i;

	i = 0;
	while (str[p] != ':' && key[i] != '\0')
	{
		if (str[p] != key[i])
			return (0);
		i++;
		p++;
	}
	if (str[p] == ':' && key[i] == '\0')
		return (p);
	else
		return (0);
}

char	*get_value_from_index_key(int p, char *str, char *value)
{
	int	i;

	i = 0;
	while (str[p] != ':')
		p++;
	p++;
	while (str[p] != '\n')
	{
		value[i] = str[p];
		i++;
		p++;
	}
	value[i] = '\0';
	return (value);
}
