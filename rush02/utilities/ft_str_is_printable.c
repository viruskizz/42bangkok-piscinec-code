/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacharoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 23:13:51 by nacharoe          #+#    #+#             */
/*   Updated: 2021/12/11 22:10:51 by nacharoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/util.h"

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str > 31 && *str < 127))
			return (0);
		str++;
	}
	return (1);
}
