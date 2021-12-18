/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:33:05 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/06 08:53:56 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	i;
	char			diff;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str2[i] == '\0')
			return (1);
		diff = str1[i] - str2[i];
		if (diff < 0)
			return (-1);
		else if (diff > 0)
			return (1);
		i++;
	}
	if (str2[i] != '\0')
		return (-1);
	return (0);
}
