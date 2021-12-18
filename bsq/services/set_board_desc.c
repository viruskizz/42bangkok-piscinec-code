/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_board_desc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 00:22:53 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 19:36:19 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../headers/utils.h"
#include "../headers/types.h"

int		get_board_width(char *str);
int		get_header_len(char *str);

t_board	set_board_desc(t_file file, t_board board)
{
	char	*nb;
	int		i;
	int		header_len;

	i = 0;
	nb = malloc(100 * sizeof(char));
	header_len = get_header_len(file.data);
	while (file.data[i] >= '0' && file.data[i] <= '9' && (i < header_len - 3))
	{
		nb[i] = file.data[i];
		i++;
	}
	nb[i] = '\0';
	board.width = get_board_width(file.data);
	board.height = str_number_to_int(nb);
	board.empty = file.data[header_len - 3];
	board.obs = file.data[header_len - 2];
	board.full = file.data[header_len - 1];
	free(nb);
	return (board);
}

int	get_board_width(char *str)
{
	int	i;

	i = 0;
	while (*str != '\n')
		str++;
	str++;
	while (*str != '\n' && *str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int	get_header_len(char *str)
{
	int	i;

	i = 0;
	while (*str != '\n')
	{
		str++;
		i++;
	}
	return (i);
}
