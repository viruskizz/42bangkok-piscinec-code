/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 09:04:01 by tsomsa            #+#    #+#             */
/*   Updated: 2021/11/27 23:19:56 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_square(int a, int b, int i, int j);

// int b as row
// int a as column
void	rush(int a, int b)
{
	int		i;
	int		j;

	i = 0;
	while (i < b)
	{
		j = 0;
		while (j < a)
		{
			print_square(a, b, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

// int b as row
// int a as column
// int i as row iterated number
// int j as column interated number 
void	print_square(int a, int b, int i, int j)
{
	if (j != 0 && j != a - 1 && i != 0 && i != b - 1)
	{
		ft_putchar(' ');
	}
	else if ((i == 0 && j == 0) || (i == b - 1 && j == a - 1))
	{
		ft_putchar('/');
	}
	else if ((i == 0 && j == a - 1) || (j == 0 && i == b - 1))
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}
