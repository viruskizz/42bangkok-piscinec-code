/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 04:11:43 by tsomsa            #+#    #+#             */
/*   Updated: 2021/11/30 09:37:05 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	pn(char i, char j, char k);

// ASCII  '0' = 48
// ASCII  '9' = 57
void	ft_print_comb(void)
{
	int		i;
	int		n;
	int		j;
	int		k;

	i = 48;
	n = 57;
	while (i <= n)
	{
		j = 49;
		while (j <= n)
		{
			k = 50;
			while (k <= n)
			{
				pn(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	pn(char i, char j, char k)
{
	if (i < j && i < k && j < k)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		if (i != 55 || j != 56 || k != 57)
			write(1, &", ", 2);
	}
}
