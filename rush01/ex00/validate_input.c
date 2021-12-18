/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:43:48 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/04 23:43:33 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	validate_string_pattern(char *input);
static int	validate_char_number_range(char c);
static int	g_size;

int	validate_input(char *input, int size)
{
	int	check;

	g_size = size;
	check = validate_string_pattern(input);
	return (check);
}

static int	validate_string_pattern(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0 && !validate_char_number_range(input[i]))
			return (0);
		if (i % 2 == 1 && input[i] != ' ')
			return (0);
		i++;
	}
	if (i != g_size * 4 * 2 - 1)
		return (0);
	return (1);
}

static int	validate_char_number_range(char c)
{
	int	nb;

	nb = c - '0';
	if (nb > 0 && nb <= g_size)
		return (1);
	else
		return (0);
}
