/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:27:20 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 23:58:32 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!is_prime(nb))
		nb++;
	return (nb);
}

int	is_prime(int nb)
{
	long	i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
