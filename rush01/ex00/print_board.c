/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 12:51:10 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/05 22:42:40 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_top_edge(int *views);
static void	print_below_edge(int *views);
static void	print_left_edge(int *views, int i);
static void	print_right_edge(int *views, int i);

int	g_size;
int	*g_views;
int	**g_square;

void	print_board(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	print_top_edge(g_views);
	while (i < g_size)
	{
		j = 0;
		print_left_edge(g_views, i);
		while (j < g_size)
		{
			c = g_square[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		print_right_edge(g_views, i);
		write(1, "\n", 1);
		i++;
	}
	print_below_edge(g_views);
}

static void	print_top_edge(int *views)
{
	int		i;
	char	c;

	i = 0;
	write(1, "   ", 3);
	while (i < g_size)
	{
		c = views[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	write(1, "--------------", 14);
	write(1, "\n", 1);
}

static void	print_below_edge(int *views)
{
	int		i;
	char	c;

	i = 0;
	write(1, "--------------", 14);
	write(1, "\n", 1);
	write(1, "   ", 3);
	while (i < g_size)
	{
		c = views[g_size + i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

static void	print_left_edge(int	*views, int i)
{
	char	c;

	c = views[g_size * 2 + i] + '0';
	write(1, &c, 1);
	write(1, "|", 1);
	write(1, " ", 1);
}

static void	print_right_edge(int *views, int i)
{
	char	c;

	c = views[g_size * 3 + i] + '0';
	write(1, "|", 1);
	write(1, " ", 1);
	write(1, &c, 1);
}
