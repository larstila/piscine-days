#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkettune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 17:59:47 by lkettune          #+#    #+#              #
#    Updated: 2020/02/18 10:30:07 by lkettune         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = do-op
FLAGS = -Wall -Wextra -Werror
SRC = main.c ft_atoi.c ft_putchar.c ft_putnbr.c operators.c
OBJ = main.o ft_atoi.o ft_putchar.o ft_putnbr.o operators.o

all: $(NAME)

$(NAME): obj
	gcc $(FLAGS) -o $(NAME) $(OBJ) -I do-op.h

obj:
	gcc -c $(FLAGS) $(SRC)

clean:
	/bin/rm -f $(NAME) $(OBJ)

re: clean all
