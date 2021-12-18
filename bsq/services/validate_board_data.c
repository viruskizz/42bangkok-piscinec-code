/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_board_data.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:47:06 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 19:39:35 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "../headers/utils.h"

char	*skip_head(char *str);
int		count_line(char *str);
int		is_valid_body_characters(char *str, t_board board);
int		is_same_line_length(char *str);

t_board	validate_board_data(t_file file, t_board board)
{
	int	line;

	line = count_line(file.data);
	board.is_valid = 0;
	if (line < 1 || line != board.height)
	{
		board.msg = "map error";
		return (board);
	}
	else if (!is_valid_body_characters(file.data, board))
	{
		board.msg = "map error";
		return (board);
	}
	else if (!is_same_line_length(file.data))
	{
		board.msg = "map error";
		return (board);
	}
	board.is_valid = 1;
	board.msg = " ";
	return (board);
}

int	is_valid_body_characters(char *str, t_board board)
{
	while (*str != '\n')
		str++;
	while (*str)
	{
		if (*str != board.obs && *str != board.empty && *str != '\n')
			return (0);
		str++;
	}
	return (1);
}

char	*skip_head(char *str)
{
	while (*str != '\n')
		str++;
	str++;
	return (str);
}

int	is_same_line_length(char *str)
{
	int	width;
	int	count;

	width = 0;
	str = skip_head(str);
	while (*str != '\n')
	{
		width++;
		str++;
	}
	str++;
	while (*str)
	{
		count = 0;
		while (*str != '\n')
		{
			count++;
			str++;
		}
		if (count == 0 || count != width)
			return (0);
		str++;
	}
	return (1);
}

int	count_line(char *str)
{
	int	line;

	line = 0;
	while (*str)
	{
		if (*str == '\n')
			line++;
		str++;
	}
	return (line - 1);
}
