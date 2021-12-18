/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:49:31 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/01 21:05:46 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *i, int *j);

void	ft_rev_int_tab(int *tab, int size)
{
	int		*i;
	int		*j;

	i = tab;
	j = tab + size - 1;
	while (i < tab + size / 2)
	{
		swap(i, j);
		i++;
		j--;
	}
}

void	swap(int *i, int *j)
{
	int		temp;

	temp = *i;
	*i = *j;
	*j = temp;
}
