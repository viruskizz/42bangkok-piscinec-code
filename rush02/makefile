# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pingpanu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 20:46:36 by pingpanu          #+#    #+#              #
#    Updated: 2024/07/30 19:40:33 by tsomsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = test.c services/*.c utilities/*.c 

all: $(NAME)

$(NAME):
	gcc -I./headers $(SRC) -o $(NAME) 

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

