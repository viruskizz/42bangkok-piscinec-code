/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchatvet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:03:39 by kchatvet          #+#    #+#             */
/*   Updated: 2021/12/12 08:24:35 by kchatvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare_if(char *dest)
{	
	if (dest[0] > '4')
		return (10);
	if (dest[1] > '2')
		return (9);
	if (dest[2] > '9')
		return (8);
	if (dest[3] > '4')
		return (7);
	if (dest[4] > '9')
		return (6);
	if (dest[5] > '6')
		return (5);
	if (dest[6] > '7')
		return (4);
	if (dest[7] > '2')
		return (3);
	if (dest[8] > '9')
		return (2);
	if (dest[9] > '4')
		return (1);
	return (0);
}

int	ft_overflow(char *str)
{
	int		i;
	int		over;
	char	*dest;

	i = 0;
	over = 0;
	while (str[i] != '\0')
	{
		if (i >= 10)
			return (11);
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	if (i == 10)
	{
		over = compare_if(dest);
	}
	return (over);
}
