
#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkettune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 16:29:30 by lkettune          #+#    #+#              #
#    Updated: 2020/02/20 18:01:27 by lkettune         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_tail
FLAGS = -Wall -Wextra -Werror
SRC = ft_tail.c ft_put.c error_handeling.c
OBJ = ft_tail.o ft_put.o error_handeling.o

all: 
	gcc -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME) -I header.h
clean:
	/bin/rm *.o
fclean: clean
	/bin/rm $(NAME)
re: fclean all
