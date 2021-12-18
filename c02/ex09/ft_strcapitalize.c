/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:09:09 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/03 01:02:56 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check is_offset and lowercase => convert to upper
// if not in range is_offset = true

void	check_is_offset(char *str, int i);
void	check_not_offset(char *str, int i);

int	g_is_offset;

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	g_is_offset = 1;
	while (str[i] != '\0')
	{
		if (g_is_offset == 1)
			check_is_offset(str, i);
		else
			check_not_offset(str, i);
		i++;
	}
	return (str);
}

void	check_is_offset(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		g_is_offset = 0;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
		g_is_offset = 0;
	else if (str[i] >= '0' && str[i] <= '9')
		g_is_offset = 0;
	else
		g_is_offset = 1;
}

void	check_not_offset(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
		g_is_offset = 0;
	}
	else if (str[i] >= '0' && str[i] <= '9')
		g_is_offset = 0;
	else if (str[i] < 'a' || str[i] > 'z')
		g_is_offset = 1;
}
