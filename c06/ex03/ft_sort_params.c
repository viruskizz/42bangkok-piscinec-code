/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:05:59 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/10 10:57:51 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**sort_string_arr(char *str[], int size);
int		compare_string(char *str1, char *str2);
void	print_string(char *str);

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	argv = argv + 1;
	argc = argc - 1;
	argv = sort_string_arr(argv, argc);
	while (i < argc)
	{
		print_string(argv[i]);
		print_string("\n");
		i++;
	}
}

char	**sort_string_arr(char *str[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (compare_string(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	compare_string(char *str1, char *str2)
{
	while (str1 == str2)
	{
		if (*str1 == '\0')
			return (0);
		str1++;
		str2++;
	}
	if (*str1 < *str2)
		return (-1);
	else
		return (1);
}

void	print_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
