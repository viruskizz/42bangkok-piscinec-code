/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:27:42 by tsomsa            #+#    #+#             */
/*   Updated: 2021/11/30 14:18:14 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		init_const(int n, int x);
int		check_duplicate_char(int nb, int pos);
void	print_number(int nb, int pos);
int		power10(int c);

int		g_n_limit;
int		g_start_number;
int		g_end_number;

void	ft_print_combn(int n)
{
	int		pos;
	int		i;

	g_n_limit = n;
	g_start_number = init_const(g_n_limit, 0);
	g_end_number = init_const(g_n_limit, 1);
	pos = n - 2;
	i = g_start_number;
	while (i <= g_end_number)
	{
		if (!check_duplicate_char(i, pos))
		{
			print_number(i, pos);
			if (i != g_end_number)
				write(1, &", ", 2);
			if (i == g_end_number)
				break ;
		}
		i++;
		if (i % power10(pos + 1) == 0)
		{
			pos++;
		}
	}
}

/**
 * init const start and end number
 * n = 4
 * start = 0123
 * end = 9786
 */
int	init_const(int n, int x)
{
	int		pos;
	int		result;
	int		value;

	if (x == 0)
	{
		value = n - 1;
	}
	else
	{
		value = 9;
	}
	pos = 0;
	result = 0;
	while (pos < n)
	{
		if (x == 0)
			result += value * power10(pos);
		else
			result += value * power10(pos);
		value--;
		pos++;
	}
	return (result);
}

/**
 * Check duplicate and greater character in nubmer
 * [0] < [1] < [2] < ... [n]
 * Bubble sort adopt to Bubbble Check
 * head of number (h_nb) < check head of tail number (c_ch_nb)
 */
int		g_h_nb;
int		g_t_nb;
int		g_ch_nb;
int		g_is_dup;

int	check_duplicate_char(int nb, int pos)
{
	int		j;
	int		i;

	i = pos;
	g_is_dup = 0;
	while (i > 0 && g_is_dup == 0)
	{
		j = i - 1;
		nb = nb % power10(i + 1);
		g_h_nb = nb / power10(i);
		g_t_nb = nb % power10(i);
		while (j >= 0 && g_is_dup == 0)
		{
			g_ch_nb = g_t_nb / power10(j);
			if (g_h_nb >= g_ch_nb)
			{
				g_is_dup = 1;
			}
			g_t_nb = g_t_nb % power10(j);
			j--;
		}
		i--;
	}
	return (g_is_dup);
}

void	print_number(int nb, int pos)
{
	int		p_nb;
	char	c;

	if (nb < power10(g_n_limit - 1))
		write(1, &"0", 1);
	while (pos >= 0)
	{
		p_nb = nb / power10(pos);
		nb = nb % power10(pos);
		c = p_nb + '0';
		write(1, &c, 1);
		pos--;
	}
}

int	power10(int b)
{
	int		i;
	int		c;

	i = 0;
	c = 1;
	if (b == 0)
		return (1);
	while (i < b)
	{
		c = c * 10;
		i++;
	}
	return (c);
}
