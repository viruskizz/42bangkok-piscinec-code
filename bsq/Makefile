# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsomsa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 00:29:52 by tsomsa            #+#    #+#              #
#    Updated: 2021/12/16 19:09:30 by tsomsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#Color
RED = \033[1;31m
BLUE = \033[1;34;47m
GREEN = \033[1;32m
RESET = \033[m

g_board = generate_fun_board.pl
f_board = fun_board.txt
x = 20
y = 20
dens = 5

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = bsq
INCLUDES = -I./headers -I./types
LIBS = -L./lib/my -lservices
SRCS = main.c
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): libs
	$(CC) $(CFLAGS) main.c -g -o $(NAME) $(LIBS)

libs:
	make -C services/


gen_board:
	@echo "${RED}Generating Fun Board follow by this rules...${RESET}"
	@echo "- width = ${x}\n- height = ${y}\n- Dens = ${dens}"
	@perl ${g_board} ${x} ${y} ${dens} > ${f_board} 
	@echo "${BLUE}=== Your ${f_board} File ===${RESET}"
	@cat ${f_board}
	@echo ""

execute:
	@echo "${GREEN}Executing your code...${RESET}"
	@./bsq.out

.PHONY: clean

clean:
	@rm -f $(OBJS)
	@echo "*.o has cleaned"

fclean:
	@make fclean -C services/
	@rm -rf *.o ${NAME}

re: fclean all
