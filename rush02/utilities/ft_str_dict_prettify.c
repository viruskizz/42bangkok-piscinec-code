/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dict_prettify.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 05:05:56 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/12 15:12:31 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/util.h"

char	*ft_str_dict_prettify(char *dest, char *src)
{
	int		i;

	i = 0;
	while (*src)
	{
		while (*src != ':')
		{
			if (*src >= '0' && *src <= '9')
				dest[i++] = *src;
			src++;
		}
		dest[i++] = ':';
		src++;
		while (*src != '\n')
		{
			if ((*src > 32 && *src < 127) || (*src == ' ' && *(src - 1) != ' '))
				dest[i++] = *src;
			src++;
		}
		dest[i++] = '\n';
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
