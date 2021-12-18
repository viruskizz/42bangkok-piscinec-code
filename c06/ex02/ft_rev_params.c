/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:58:55 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 10:02:21 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *str);

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		print_string(argv[i]);
		print_string("\n");
		i--;
	}
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
