/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:47:31 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/05 21:34:35 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		select_view_port(char direction, int index);
int		get_view_port(int *arr, char direction);
int		*get_column(int *col, int col_index);
int		is_same_row(int row, int nb);
int		is_same_col(int col, int nb);
int		is_collect_view_row(int row);
int		is_collect_view_col(int col);

int		g_size;
int		*g_views;
int		**g_square;

int	is_same_row(int row, int nb)
{
	int	p;

	p = 0;
	while (p < g_size)
	{
		if (nb == g_square[row][p])
			return (1);
		p++;
	}
	return (0);
}

int	is_same_col(int col, int nb)
{
	int	p;

	p = 0;
	while (p < g_size)
	{
		if (nb == g_square[p][col])
			return (1);
		p++;
	}
	return (0);
}

int	is_collect_view_row(int row)
{
	int	l_view;
	int	r_view;
	int	input_l_view;
	int	input_r_view;

	l_view = get_view_port(g_square[row], 'L');
	r_view = get_view_port(g_square[row], 'R');
	input_l_view = select_view_port('L', row);
	input_r_view = select_view_port('R', row);
	if (l_view == input_l_view && r_view == input_r_view)
		return (1);
	else
		return (0);
}

int	is_collect_view_col(int col)
{
	int	t_view;
	int	b_view;
	int	input_t_view;
	int	input_b_view;
	int	*col_arr;

	col_arr = malloc(g_size * sizeof(int));
	col_arr = get_column(col_arr, col);
	t_view = get_view_port(col_arr, 'T');
	b_view = get_view_port(col_arr, 'B');
	input_t_view = select_view_port('T', col);
	input_b_view = select_view_port('B', col);
	if (t_view == input_t_view && b_view == input_b_view)
		return (1);
	else
		return (0);
}
