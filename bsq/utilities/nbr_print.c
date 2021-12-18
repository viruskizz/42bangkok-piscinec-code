/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 02:24:55 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/16 02:28:25 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_write(char c);
int		set_nb_negative(int nb);

void	nbr_print(int nb)
{
	nb = set_nb_negative(nb);
	if (nb < 10)
	{
		my_write(nb + '0');
	}
	else
	{
		nbr_print(nb / 10);
		my_write(nb % 10 + '0');
	}
}

int	set_nb_negative(int nb)
{
	if (nb == -2147483648)
	{
		my_write('-');
		my_write('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		my_write('-');
		nb = nb * -1;
	}
	return (nb);
}

void	my_write(char c)
{
	write(1, &c, 1);
}
