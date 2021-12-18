/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serv.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:27:37 by tsomsa            #+#    #+#             */
/*   Updated: 2021/12/12 23:23:31 by tsomsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERV_H
# define SERV_H

void	ft_number_to_text(char *str);
int		ft_validation(int argc, char **argv);
char	*ft_get_value_from_dict(char *str, char *key, char *value);
void	ft_print_number_to_text(char *nb, char *dict_data);
void	print_number_set(char *nb, int size, int base);
void	print_base2(char *nb, int size, int base);
void	print_base3(char *nb, int size, int base);

#endif
