/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:16:55 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/12 18:26:33 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../headers/util.h"

#define BUF_SIZE 4096

t_file	ft_read_file(char *filename, t_file file)
{
	int		ret;
	char	*buf;

	buf = malloc((BUF_SIZE + 1) * sizeof(char));
	file.desc = open(filename, O_RDONLY);
	if (file.desc != -1)
		file.msg = "Open succeed";
	else
		file.msg = "Error cannot open file";
	ret = read(file.desc, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_str_concat(file.data, buf);
		ret = read(file.desc, buf, BUF_SIZE);
	}
	return (file);
}
