/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:47:48 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 19:34:07 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "utils.h"
#include "types.h"

t_board	set_board_matrix_data(t_board board, char *data);

t_board	get_fun_board(t_file file, t_board board)
{
	board = set_board_matrix_data(board, file.data);
	return (board);
}

t_board	set_board_matrix_data(t_board board, char *data)
{
	int		i;
	int		j;

	board.data = malloc((board.height + 1) * (board.width + 1) * sizeof(char));
	while (*data != '\n')
		data++;
	data++;
	i = 0;
	while (*data != '\0')
	{
		j = 0;
		board.data[i] = malloc((board.width + 1) * sizeof(char));
		while (*data != '\n')
		{
			board.data[i][j] = *data;
			j++;
			data++;
		}
		board.data[i][j] = '\0';
		i++;
		data++;
	}
	return (board);
}
