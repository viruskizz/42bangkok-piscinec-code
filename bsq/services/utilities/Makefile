# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npiya-is <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 16:33:42 by npiya-is          #+#    #+#              #
#    Updated: 2021/12/16 18:02:39 by npiya-is         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = *.c

NAME = libutils.a
SRCS = nbr_print.c \
		read_file.c \
		str_concat.c \
		str_copy.c \
		str_len.c \
		str_number_to_int.c \
		str_print_err.c \
		str_print.c \
		validate_char.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(OBJS): %.o : %.c
	gcc -I../headers -I../types -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@cp $(NAME) ../lib/my/


clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f ../lib/my/$(NAME)
	@rm -f $(NAME)

re: fclean all
