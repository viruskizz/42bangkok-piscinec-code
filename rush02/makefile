# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pingpanu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 20:46:36 by pingpanu          #+#    #+#              #
#    Updated: 2021/12/12 23:36:58 by nacharoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = test.c services/*.c utilities/*.c 

all: $(NAME)

$(NAME):
	gcc -I. $(SRC) -o $(NAME) 

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

