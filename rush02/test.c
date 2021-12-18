/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 03:54:28 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/13 23:07:36 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "types/file.h"
#include "headers/util.h"
#include "headers/serv.h"

#define BUF_SIZE 4096

int	main(int argc, char *argv[])
{
	char	*pathname;
	char	*data;
	char	*value;
	t_file	file;

//	if (!ft_validation(argc, argv))
//		return (0);
	pathname = malloc(1000 * sizeof(char));
	pathname = "numbers.dict";
	file.data = malloc((BUF_SIZE + 1) * sizeof(char));
	data = malloc((BUF_SIZE + 1) * sizeof(char));
	value = malloc(100 * sizeof(char));
	file = ft_read_file(pathname, file);
	if (file.desc < 0)
	{
		ft_str_print(file.msg);
		return (0);
	}
	data = ft_str_dict_prettify(data, file.data);
	ft_print_number_to_text(argv[1], data);
	return (0);
}
