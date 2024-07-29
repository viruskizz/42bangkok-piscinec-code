/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fun_board.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:05:08 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 21:22:41 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "types.h"
#include "utils.h"
#include "services.h"

void	print_point(t_board board, int i, int j);

void	print_fun_board(t_board board)
{
	int	i;
	int	j;

	i = 0;
	while (i < board.height)
	{
		j = 0;
		while (j < board.width && board.data[i][j] != '\0')
		{
			print_point(board, i, j);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print_point(t_board board, int i, int j)
{
	if ((board.sq.x0 <= j && j <= board.sq.x0 + board.sq.len - 1)
		&& (board.sq.y0 <= i && i <= board.sq.y0 + board.sq.len - 1)
		&& board.data[i][j] != board.obs)
		write(1, &board.full, 1);
	else
		write(1, &board.data[i][j], 1);
}
