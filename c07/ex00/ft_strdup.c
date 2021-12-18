/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:18:20 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/13 22:12:34 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_strlen(char *str);
char *my_strcpy(char dest, char *src);

char *my

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i++;
	return (i);
}
