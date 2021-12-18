/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map_header_file.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:48:05 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 19:38:26 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/utils.h"

int		v_get_header_len(char *str);
t_file	validate_characters(t_file file, int n);
t_file	validate_number(t_file file, int n);

t_file	validate_map_header_file(t_file file)
{
	int		h_len;

	h_len = v_get_header_len(file.data);
	file = validate_characters(file, h_len);
	if (file.desc == -1)
		return (file);
	file = validate_number(file, h_len);
	if (file.desc == -1)
		return (file);
	return (file);
}

t_file	validate_characters(t_file file, int n)
{
	if (!is_c_printable(file.data[n - 1])
		|| !is_c_printable(file.data[n - 2])
		|| !is_c_printable(file.data[n - 3]))
	{
		file.desc = -1;
		file.msg = "map error";
	}
	else if ((file.data[n - 1] == file.data[n - 2]
			|| file.data[n - 1] == file.data[n - 3])
		|| file.data[n - 2] == file.data[n - 3])
	{
		file.desc = -1;
		file.msg = "map error";
	}
	return (file);
}

t_file	validate_number(t_file file, int n)
{
	int	i;

	i = 0;
	while (i < n - 3)
	{
		if (!is_c_numeric(file.data[i]))
		{
			file.desc = -1;
			file.msg = "map error";
			break ;
		}		
		i++;
	}
	return (file);
}

int	v_get_header_len(char *data)
{
	int	i;

	i = 0;
	while (data[i] != '\n' && data[i] != '\0')
		i++;
	return (i);
}
