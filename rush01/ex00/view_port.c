/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_port.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:58:47 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/05 21:36:39 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_duplicate(int *arr, int size);

int	g_size;
int	*g_views;
int	**g_square;

// Direction = 'T', 'B', 'L', 'R'
int	get_view_port(int *arr, char direction)
{
	int	i;
	int	count;
	int	max;

	i = 0;
	count = 0;
	max = 0;
	while (i < g_size)
	{
		if (direction == 'B' || direction == 'R')
		{
			if (arr[g_size - i - 1] > max)
			{
				max = arr[g_size - i - 1];
				count++;
			}
		}
		else if (arr[i] > max)
		{
			max = arr[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	select_view_port(char direction, int index)
{
	int	x;

	if (direction == 'T')
		x = 0;
	if (direction == 'B')
		x = 1;
	if (direction == 'L')
		x = 2;
	if (direction == 'R')
		x = 3;
	return (*(g_views + g_size * x + index));
}

int	*get_column(int *col, int col_index)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		col[i] = g_square[i][col_index];
		i++;
	}
	return (col);
}
