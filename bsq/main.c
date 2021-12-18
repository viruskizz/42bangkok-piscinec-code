/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:38:41 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 21:54:11 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "headers/utils.h"
#include "headers/types.h"
#include "headers/services.h"
#include "headers/constants.h"
#include <unistd.h>

void	get_input(void);
t_file	run_input(t_file file);

int	main(int argc, char *argv[])
{
	if (argc >= 2)
		runner(argc, argv);
	else
		get_input();
	return (0);
}

void	get_input(void)
{
	char	*input;
	char	buf;
	int		i;
	t_file	file;

	i = 0;
	input = malloc(BUFF_SIZE * BUFF_SIZE * sizeof(char));
	while (read(0, &buf, 1) > 0)
	{
		input[i] = buf;
		i++;
	}
	input[i] = '\0';
	file.data = malloc((str_len(input) + 1) * sizeof(char));
	file.data = str_copy(file.data, input);
	free(input);
	file = run_input(file);
	if (file.desc != -1)
		executor(file);
	free(file.data);
}

t_file	run_input(t_file file)
{
	file = validate_map_header_file(file);
	if (file.desc == -1)
	{
		str_print_err(file.msg);
		return (file);
	}
	return (file);
}
