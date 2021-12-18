/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pingpanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:27:37 by pingpanu          #+#    #+#             */
/*   Updated: 2021/12/12 18:16:32 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/util.h"

int	checkoverflow(char *input);

int	ft_validation(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]) == 1)
		{
			if (checkoverflow(argv[1]) == 1)
				ft_str_print("Dict Error\n");
			else
				return (1);
		}
		else
			ft_str_print("Dict Error\n");
	}
	else
		ft_str_print("Dict Error\n");
	return (0);
}		

int	checkoverflow(char *input)
{
	long long int	nbr;
	unsigned int	i;

	i = 0;
	nbr = 0;
	if (ft_str_length(input) > 10 )
		return (1);
	while (input[i] != '\0')
	{
		nbr = nbr * 10 + input[i] - '0';
		if (nbr > 4294967295)
			return (1);
		i++;
	}
	return (0);
}
