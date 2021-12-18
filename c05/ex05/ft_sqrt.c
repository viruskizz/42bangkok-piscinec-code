/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:02:30 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 00:09:15 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	mid;
	long	min;
	long	max;

	min = 0;
	max = nb;
	if (nb < 0)
		return (0);
	while (min <= max)
	{
		mid = (max + min) / 2;
		if (mid * mid == nb)
			return ((int) mid);
		else if (mid * mid < nb)
			min = mid + 1;
		else
			max = mid - 1;
	}
	return (0);
}
