/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_get_number_unit.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacharoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:08:36 by nacharoe          #+#    #+#             */
/*   Updated: 2021/12/11 22:09:45 by nacharoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/util.h"

int	ft_str_get_number_unit(char c, int digit_index)
{
	int	number;

	number = c - '0';
	number = number * ft_math_pow(10, digit_index);
	return (number);
}	
