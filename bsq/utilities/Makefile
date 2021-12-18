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

name = libutils.a

$(name):$(src)
	@gcc -c $(src)
	@ar rc $(name) *.o
	@mv $(name) ../lib/my/
	@rm -f *.o

all:	$(name)

clean:
	@rm -f *.o *.a
	@rm -f *~
	@echo "*.o has clean"
	@echo ""

fclean:
	@rm -f ../lib/my/$(name) *.o
	@echo "*.o has clean"
	@echo "$(name) has clean"
	@echo ""

re: fclean all
