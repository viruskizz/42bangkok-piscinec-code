/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:20:44 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/13 23:12:22 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../headers/util.h"
#include "../headers/serv.h"

void	print_number_set(char *nb, int size, int base);
void	print_base2(char *nb, int size, int base);
void	print_base3(char *nb, int size, int base);

char	*g_nb;
char	*g_dict;

void	print_base2(char *nb, int size, int base)
{
	char	*value;
	char	*buff;

	buff = malloc(10 * sizeof(char));
	value = malloc(10 * sizeof(char));
	if ((size ==  1) || (size == 2 && nb[0] == '1'))
	{
		if (base > 0 && nb[0] == '0')
			ft_str_print(" ");
		else
			ft_str_print(ft_get_value_from_dict(g_dict, nb, value));
	}
	else if (size == 2)
	{
		if (nb[0] == '0')
		{
			buff[0] = nb[1];
			buff[1] = '\0';
			value = ft_get_value_from_dict(g_dict, buff, value);
			ft_str_print(value);
		}
		else if (nb[1] > '0')
		{
			buff[0] = nb[1];
			buff[1] = '\0';
			nb[1] = '0';
			ft_str_print(ft_get_value_from_dict(g_dict, nb, value));
			ft_str_print(ft_get_value_from_dict(g_dict, buff, value));
		}
		else if (nb[1] == '0')
		{
			value = ft_get_value_from_dict(g_dict, nb, value);
			ft_str_print(value);
		}
	}
}

void	print_base3(char *nb, int size, int base)
{
	char	*buff;
	char	*value;

	value = malloc(50 * sizeof(char));
	buff = malloc(50 * sizeof(char));
	buff[0] = nb[0];
	buff[1] = '\0';
	// check nb[b] > '0' to check print hundred
	if (nb[0] > '0')
	{
		ft_str_print(ft_get_value_from_dict(g_dict, buff, value));
		ft_str_print(ft_get_value_from_dict(g_dict, "100", value));
	}
	if (nb[1] > '0')
	{
		nb[0] = nb[1];
		nb[1] = nb[2];
		nb[2] = '\0';
		print_base2(nb, 2, base);
	}
	else
	{
		nb[0] = nb[2];
		nb[1] = '\0';
		print_base2(nb, 1, base);
	}
}

void	print_number_set(char *nb, int size, int base)
{
	char	*value;

	value = malloc(50 * sizeof(char));
	if (size > 0)
		print_base2(nb, size, base);
	if (size == 0)
	{
		print_base3(nb, size, base);
	}
	// add nb != 0 to check tail of number set
	if (nb[0] != '0' && nb[1] != '0' && nb[2] != '0' &&  base == 3)
		ft_str_print(ft_get_value_from_dict(g_dict, "1000000000", value));
	if (nb[0] != '0' && nb[1] != '0' && nb[2] != '0' &&  base == 2)
		ft_str_print(ft_get_value_from_dict(g_dict, "1000000", value));
	if (nb[0] != '0' && nb[1] != '0' && nb[2] != '0' &&  base == 1)
		ft_str_print(ft_get_value_from_dict(g_dict, "1000", value));
}
