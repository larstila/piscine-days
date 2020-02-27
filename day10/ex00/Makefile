#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkettune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 14:33:10 by lkettune          #+#    #+#              #
#    Updated: 2020/02/17 16:50:38 by lkettune         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC_DIR := ./srcs
HDR_DIR := ./includes
SRC = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
HDR = $(HDR_DIR)/
OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

NAME = libft.a

all: $(NAME)

$(NAME): obj 
	ar rc $@ $(OBJ)
	ranlib $@

obj:
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HDR)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean
	all