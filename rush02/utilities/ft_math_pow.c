/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_pow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacharoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:32:33 by nacharoe          #+#    #+#             */
/*   Updated: 2021/12/11 22:09:23 by nacharoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/util.h"

int	ft_math_pow(int base_number, int pow_number)
{
	if (pow_number == 0)
		return (1);
	if (pow_number == 1)
		return (base_number);
	else
		return (base_number * ft_math_pow(base_number, pow_number - 1));
}
