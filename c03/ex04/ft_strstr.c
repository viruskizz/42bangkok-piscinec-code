/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:59:05 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/06 09:10:43 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare_next_str(char *str1, char *str2);

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find && compare_next_str(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

int	compare_next_str(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (0);
		str1++;
		str2++;
	}
	return (*str2 == '\0');
}
