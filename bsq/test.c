/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:38:41 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/17 19:30:55 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "headers/utils.h"
#include "headers/constants.h"
#include "headers/services.h"

int	main(void)
{
	char	**arr;

	arr = malloc(2 * 100 * sizeof(char));
	arr[1] = malloc(100 * sizeof(char));
	arr[1] = str_copy(arr[1], "assets/fun_board.txt");
	runner(2, arr);
	free(arr[1]);
	free(arr);
	str_print("== Finish!!  ==\n");
	return (0);
}
