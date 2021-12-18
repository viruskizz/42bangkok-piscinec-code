/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 05:53:07 by tsomsa            #+#    #+#             */
/*   Updated: 2021/11/30 08:58:11 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	convert_char_2int(char i, char j)
{
	int		number;

	number = ((int) i * 10) + ((int) j);
	return (number);
}

void	print_from_2int(int n)
{
	char	a;
	char	b;

	if (n >= 10)
	{
		a = n / 10 + '0';
		b = n % 10 + '0';
	}
	else
	{
		a = '0';
		b = n + '0';
	}
	write(1, &a, 1);
	write(1, &b, 1);
}

void	print_condition(int i, int j)
{	
	print_from_2int(i);
	write(1, &" ", 1);
	print_from_2int(j);
	if (i != 98 || j != 99)
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (i != j)
			{
				print_condition(i, j);
			}
			j++;
		}
		i++;
		if (i == 99 && j == 100)
		{
			break ;
		}
	}
}
