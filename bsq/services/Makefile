# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 16:33:42 by npiya-is          #+#    #+#              #
#    Updated: 2021/12/16 18:02:19 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = *.c

NAME = libservices.a
SRCS = find_max_square.c \
		get_fun_board.c \
		print_fun_board.c \
		runner.c \
		set_board_desc.c \
		validate_board_data.c \
		validate_map_header_file.c \
		utilities/nbr_print.c \
		utilities/read_file.c \
		utilities/str_concat.c \
		utilities/str_copy.c \
		utilities/str_len.c \
		utilities/str_number_to_int.c \
		utilities/str_print_err.c \
		utilities/str_print.c \
		utilities/validate_char.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(OBJS): %.o : %.c
	gcc -I../headers -I../types -c $< -o $@

$(NAME): $(OBJS)
	ar -csr $(NAME) $(OBJS)
	@cp $(NAME) ../lib/my/


clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f ../lib/my/$(NAME)
	@rm -f $(NAME)

re: fclean all
