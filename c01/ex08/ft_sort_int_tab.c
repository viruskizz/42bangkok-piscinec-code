/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:25:54 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/01 19:57:03 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *i, int *j);

void	ft_sort_int_tab(int *tab, int size)
{
	int		*i;
	int		*j;

	i = tab;
	while (i < tab + size - 1)
	{
		j = i + 1;
		while (j < tab + size)
		{
			swap(i, j);
			j++;
		}
		i++;
	}	
}

void	swap(int *i, int *j)
{
	int		temp;

	temp = *i;
	if (*j < *i)
	{
		*i = *j;
		*j = temp;
	}
}
