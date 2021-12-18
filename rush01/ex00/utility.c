/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:15:37 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/05 22:21:29 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
#include <stdlib.h>

int		*string_int_to_array(char *str, int *arr);
void	print_int_array(int *arr);
void	print_string(char *c);

int	**declare_array2d(int **arr, int size)
{
	int	i;
	int	j;

	i = 0;
	arr = malloc(size * sizeof(int));
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			arr[i] = malloc(size * sizeof(int));
			j++;
		}
		i++;
	}
	return (arr);
}

int	*string_int_to_array(char *str, int *arr)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			arr[i] = *str - '0';
			i++;
		}
		str++;
	}
	return (arr);
}

void	print_int_array(int *arr)
{
	char	c;

	write(1, "[ ", 2);
	while (*arr > 0)
	{
		c = *arr + '0';
		write(1, &c, 1);
		write(1, ", ", 2);
		arr++;
	}
	write(1, "]", 1);
}

void	print_string(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}
