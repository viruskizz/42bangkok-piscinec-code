/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacharoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:37:03 by nacharoe          #+#    #+#             */
/*   Updated: 2021/12/12 21:17:19 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UTIL_H
# define UTIL_H

# include <unistd.h>
# include "type.h"

void	ft_str_print(char *str);

int		ft_str_is_alpha(char *str);

int		ft_str_is_numeric(char *str);

int		ft_str_is_lowercase(char *str);

int		ft_str_is_uppercase(char *str);

int		ft_str_is_printable(char *str);

int		ft_str_length(char *str);

char	*ft_str_upcase(char *str);

char	*ft_str_lowcase(char *str);

char	*ft_str_capitalize(char *str);

char	*ft_str_concat(char *dest, char *src);

int		ft_math_pow(int base_number, int pow_number);

int		ft_str_get_number_unit(char c, int digit_index);

t_file	ft_read_file(char *filename, t_file file);

char	*ft_str_dict_prettify(char *dest, char *src);

char	*ft_str_trim(char *str);

int		ft_overflow(char *str);

int		ft_str_atoi(char *str);

char	*ft_str_copy(char *dst, char *src);

char	*ft_str_ncopy(char *dst, char *src, int n);

char	*ft_strcat(char *dest, char *src);

#endif
