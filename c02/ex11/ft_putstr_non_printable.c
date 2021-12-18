/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 01:08:55 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/03 02:15:33 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_hex(int c);

void	ft_putstr_non_printable(char *str)
{
	char	*p;
	char	c;

	p = str;
	while (*p)
	{
		if (*p < 32 || *p == 127)
		{
			write(1, "\\", 1);
			if (*p <= 16 && *p > 0)
				write(1, "0", 1);
			print_hex(*p);
		}
		else
		{
			c = *p;
			write(1, &c, 1);
		}
		p++;
	}
}

char	map_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	return (*(hex + n));
}

void	print_hex(int n)
{
	char	c;

	if (n < 0)
		n = 256 + n;
	if (n < 16)
	{	
		c = map_hex(n % 16);
		write(1, &c, 1);
	}
	else
	{
		print_hex(n / 16);
		c = map_hex(n % 16);
		write(1, &c, 1);
	}	
}
