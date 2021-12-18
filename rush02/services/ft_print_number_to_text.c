/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_to_text.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:28:27 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/12 23:36:37 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "../headers/util.h"
#include "../headers/serv.h"

char	*create_str_number(int i, int j, char *str);
void	print_number(char *str);
char	*g_nb;
char	*g_dict;

void	ft_print_number_to_text(char *nb, char *dict_data)
{
	char	*str;

	g_nb = nb;
	g_dict = dict_data;
	str = malloc(100 * sizeof(char));
	print_number(str);
}

void	print_number(char *str)
{
	int		base;
	int		n;
	int		i;
	int		j;

	i = 0;
	n = ft_str_length(g_nb);
	if (n % 3 == 0)
		j = i + 3;
	else
		j = i + n % 3;
	while (i < n)
	{
		str = create_str_number(i, j, str);
		base = (n - i - 1) / 3;
		print_number_set(str, (j - i) % 3, base);
		if (i == 0)
			i += j;
		else
			i += 3;
		j += 3;
	}
}

char	*create_str_number(int i, int j, char *str)
{
	int	k;

	k = 0;
	while (i < j)
	{
		str[k] = g_nb[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
