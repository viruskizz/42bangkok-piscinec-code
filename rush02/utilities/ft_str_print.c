/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacharoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:38:40 by nacharoe          #+#    #+#             */
/*   Updated: 2021/12/11 22:11:39 by nacharoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/util.h"

void	ft_str_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}