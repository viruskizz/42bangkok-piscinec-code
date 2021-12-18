/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:05:51 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/16 00:14:17 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H

# include "square.h"

typedef struct s_board
{
	char		*filename;
	char		*msg;
	int			is_valid;
	int			width;
	int			height;
	char		obs;
	char		empty;
	char		full;
	char		**data;
	t_square	sq;
}	t_board;

#endif
