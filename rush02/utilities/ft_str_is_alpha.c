/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacharoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 23:01:30 by nacharoe          #+#    #+#             */
/*   Updated: 2021/12/11 22:10:02 by nacharoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/util.h"

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
			return (0);
		str++;
	}
	return (1);
}
