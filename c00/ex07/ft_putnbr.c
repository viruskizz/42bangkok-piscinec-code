/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:27:42 by tsomsa            #+#    #+#             */
/*   Updated: 2021/11/30 09:15:48 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		print_number(int nb);
int		power10(int c);
void	p(char c);

void	ft_putnbr(int nb)
{
	int		is_start;

	if (nb == -2147483648)
	{
		p('-');
		p('2');
		nb = (nb % power10(9)) * -1;
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		p('-');
	}
	is_start = print_number(nb);
	if (is_start == 0)
	{
		p('0');
	}
}

int	print_number(int nb)
{
	int		pos;
	int		p_nb;
	int		is_start;

	is_start = 0;
	pos = 9;
	while (pos >= 0)
	{
		p_nb = nb / power10(pos);
		nb = nb % power10(pos);
		if (is_start == 1)
		{
			p(p_nb + '0');
		}
		else if (p_nb > 0)
		{
			is_start = 1;
			p(p_nb + '0');
		}
		pos--;
	}
	return (is_start);
}

int	power10(int b)
{
	int		a;
	int		c;
	int		i;

	a = 10;
	c = 1;
	i = 0;
	while (i < b)
	{
		c = c * 10;
		i++;
	}
	return (c);
}

void	p(char c)
{
	write(1, &c, 1);
}
