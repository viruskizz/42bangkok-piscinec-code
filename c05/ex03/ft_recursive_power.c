/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:56:18 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 23:23:24 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sum;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		power--;
		sum = nb * ft_recursive_power(nb, power);
		return (sum);
	}
	else
	{
		return (1);
	}
}
