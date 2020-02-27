#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkettune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 16:29:30 by lkettune          #+#    #+#              #
#    Updated: 2020/02/20 18:14:19 by lkettune         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = ft_display_file.o

all: 
	gcc -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME) -I header.h
clean:
	/bin/rm *.o
fclean: clean
	/bin/rm $(NAME)
re: fclean all