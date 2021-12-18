/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:33:05 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/07 23:36:58 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*str1 < *str2)
			return (-1);
		else if (*str1 > *str2)
			return (1);
		if (*str1)
			str1++;
		if (*str2)
			str2++;
		i++;
	}
	return (0);
}
