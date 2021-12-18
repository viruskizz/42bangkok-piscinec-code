/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:35:50 by npiya-is          #+#    #+#             */
/*   Updated: 2021/12/16 19:20:48 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../headers/types.h"

int		min_size(t_square sq, t_board b);
int		expand(t_square sq, t_board b);
int		is_fillable_square(t_square square, t_board board);
int		able_to_fill(t_square square, t_board board);
t_board	set_max_square(t_square square, t_board board);

t_board	find_max_square(t_board board)
{
	int			i;
	int			j;
	t_square	temp_sq;

	i = 0;
	temp_sq.len = 0;
	board.sq.x0 = 0;
	board.sq.y0 = 0;
	board.sq.len = temp_sq.len;
	while (i + board.sq.len < board.height)
	{
		j = 0;
		while (j + board.sq.len < board.width)
		{
			temp_sq.x0 = j;
			temp_sq.y0 = i;
			temp_sq.len = able_to_fill(temp_sq, board);
			if (temp_sq.len > board.sq.len)
				board = set_max_square(temp_sq, board);
			temp_sq.len = 0;
			j++;
		}
		i++;
	}
	return (board);
}	

t_board	set_max_square(t_square square, t_board board)
{
	board.sq.len = square.len;
	board.sq.x0 = square.x0;
	board.sq.y0 = square.y0;
	return (board);
}

int	able_to_fill(t_square sq, t_board b)
{
	if (b.width == 1 && b.data[0][0] != b.obs)
	{
		sq.len = 1;
		return (sq.len);
	}
	if (sq.x0 < b.width - 1 && sq.y0 < b.height - 1)
	{
		if (min_size(sq, b))
		{
			sq.len = 2;
			sq.len = expand(sq, b);
			return (sq.len);
		}
	}
	return (0);
}

int	min_size(t_square sq, t_board b)
{
	if (b.data[sq.y0][sq.x0] != b.obs && b.data[sq.y0 + 1][sq.x0] != b.obs
		&& b.data[sq.y0][sq.x0 + 1] != b.obs
		&& b.data[sq.y0 + 1][sq.x0 + 1] != b.obs)
		return (1);
	return (0);
}

int	expand(t_square sq, t_board b)
{
	int	k;

	k = 0;
	if (sq.y0 + sq.len == b.height || sq.x0 + sq.len == b.width)
		return (sq.len);
	while (k <= sq.len
		&& (sq.x0 + sq.len) < b.height
		&& (sq.y0 + sq.len) < b.width)
	{
		if (b.data[sq.y0 + sq.len][sq.x0 + k] == b.obs)
			return (sq.len);
		if (b.data[sq.y0 + k][sq.x0 + sq.len] == b.obs)
			return (sq.len);
		if (b.data[sq.y0 + sq.len - k][sq.x0 + sq.len] == b.obs)
			return (sq.len);
		if (b.data[sq.y0 + sq.len][sq.x0 + sq.len - k] == b.obs)
			return (sq.len);
		k++;
	}
	sq.len++;
	return (expand(sq, b));
}
