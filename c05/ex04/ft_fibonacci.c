/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:46:43 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 02:26:12 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum_fibonacci(int index);

/* the sequence 
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
 * nb = *(i - 2) + *(i - 1)
 */
int	ft_fibonacci(int index)
{
	int	nb;

	nb = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
	{
		index--;
		ft_fibonacci(index);
		nb = sum_fibonacci(index);
		if (nb < 0)
			return (0);
		return (nb);
	}
}

int	sum_fibonacci(int index)
{
	int	i;
	int	bf;
	int	bbf;
	int	sum;

	i = 1;
	bf = 1;
	bbf = 0;
	if (index == 0)
		return (bbf);
	if (index == 1)
		return (bf);
	while (i <= index)
	{
		sum = bf + bbf;
		bbf = bf;
		bf = sum;
		i++;
	}
	return (sum);
}
