/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:44:36 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/09 23:01:57 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		sum = sum * nb;
		if (sum < 0)
			return (0);
		nb--;
	}
	return (sum);
}
