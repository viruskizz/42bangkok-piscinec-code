/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:12:41 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/06 08:15:50 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	print_string(char *c);
int		*string_int_to_array(char *str, int *arr);
int		validate_input(char *input, int size);
int		**declare_array2d(int **arr, int size);
int		solve_square_views(void);

int		g_size ;
int		*g_views;
int		**g_square;
int		g_is_solve;

int	main(int argc, char **argv)
{
	char	*input;

	g_size = 4;
	g_is_solve = 0;
	if (argc != 2)
	{
		print_string("Error: Recieve only single argument");
		return (0);
	}
	input = argv[1];
	if (!validate_input(input, g_size))
	{
		print_string("Error: string input pattern");
		return (0);
	}
	g_views = malloc(g_size * g_size * sizeof(int));
	g_views = string_int_to_array(input, g_views);
	g_square = malloc(g_size * sizeof(int));
	g_square = declare_array2d(g_square, g_size);
	solve_square_views();
	if (!g_is_solve)
		print_string("Error cannot solve");
	return (0);
}
