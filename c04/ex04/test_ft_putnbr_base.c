/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 22:54:16 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 00:39:07 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*get_base(char *input);
char	*sort_str(char *str);
void	print_str(char *str);

void	ft_putnbr_base(int	nbr, char *base)
{
	base = sort_str(base);
}

char	*get_base(char *input)
{
	return input;
}

char	*sort_str(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	while (str[i] != 0)
	{
		j = i + 1;
		while (str[j] != 0)
		{
			if (str[j] < str[i])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
	return str;
}

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
