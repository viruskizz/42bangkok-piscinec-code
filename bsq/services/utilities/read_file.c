/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:16:50 by npiya-is          #+#    #+#             */
/*   Updated: 2021/12/17 21:14:54 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include "types.h"
#include "utils.h"
#include "constants.h"

int		read_file_size(t_file file);
t_file	open_file(t_file file);
t_file	read_buffer(t_file file);
t_file	close_file(t_file file);

t_file	read_file(char *filename, t_file file)
{
	file.name = filename;
	file = open_file(file);
	if (file.desc == -1)
		return (file);
	file.size = read_file_size(file);
	close_file(file);
	file = open_file(file);
	file.data = malloc((file.size + 1) * sizeof(char));
	file.data[0] = 0;
	file = read_buffer(file);
	file = close_file(file);
	return (file);
}

t_file	open_file(t_file file)
{
	file.desc = open(file.name, O_RDONLY);
	if (file.desc == -1)
	{
		file.msg = "map error";
		file.data = "\0";
	}
	else
		file.msg = "map error";
	return (file);
}

int	read_file_size(t_file file)
{
	char	*buf;
	int		ret;
	int		size;

	buf = malloc((BUFF_SIZE + 1) * sizeof(char));
	ret = read(file.desc, buf, BUFF_SIZE);
	size = 0;
	while (ret)
	{
		size += ret;
		ret = read(file.desc, buf, BUFF_SIZE);
	}
	free(buf);
	return (size);
}

t_file	read_buffer(t_file file)
{
	char	*buf;
	int		ret;

	buf = malloc((BUFF_SIZE + 1) * sizeof(char));
	ret = read(file.desc, buf, BUFF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		file.data = str_concat(file.data, buf);
		ret = read(file.desc, buf, BUFF_SIZE);
	}
	free(buf);
	return (file);
}

t_file	close_file(t_file file)
{
	if (close(file.desc) == -1)
	{
		file.desc = -1;
		file.msg = "map error";
	}
	return (file);
}
