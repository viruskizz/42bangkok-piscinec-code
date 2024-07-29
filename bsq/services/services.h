/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   services.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:00:33 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 21:09:33 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVICES_H
# define SERVICES_H

# include "types.h"

void	runner(int argc, char *argv[]);
void	executor(t_file file);
t_file	validate_map_header_file(t_file file);
t_board	set_board_desc(t_file file, t_board board);
t_board	validate_board_data(t_file file, t_board borad);
t_board	get_fun_board(t_file file, t_board board);
t_board	find_max_square(t_board board);
void	print_fun_board(t_board board);

#endif
