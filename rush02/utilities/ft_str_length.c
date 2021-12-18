/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacharoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:10:56 by nacharoe          #+#    #+#             */
/*   Updated: 2021/12/11 22:11:16 by nacharoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/util.h"

int	ft_str_length(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}
