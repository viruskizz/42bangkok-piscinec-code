/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:41:29 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 21:55:59 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *str);

int	main(int argc, char *argv[])
{
	if (argc > 0)
		print_string(argv[0]);
	print_string("\n");
	return (0);
}

void	print_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
