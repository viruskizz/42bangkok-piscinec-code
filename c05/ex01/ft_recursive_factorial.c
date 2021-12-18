/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:55:25 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 23:24:03 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	sum;

	if (nb < 0)
		return (0);
	else if (nb < 1)
		return (1);
	else
	{
		sum = ft_recursive_factorial(nb - 1);
		if (sum < 0)
			return (0);
		return (sum * nb);
	}
}
