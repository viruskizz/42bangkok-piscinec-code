/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:07:24 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/03 01:02:37 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int				count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
		if (n == 0)
			continue ;
		if (i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (n)
		dest[i] = '\0';
	return (count);
}
