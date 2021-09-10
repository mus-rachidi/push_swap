# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 18:25:15 by murachid          #+#    #+#              #
#    Updated: 2021/06/25 20:25:15 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = error.c ft_atoi.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_strlcpy.c\
	ft_strlen.c instructions.c instructions_utile.c main.c push_swap.c\
	push_swap_utile.c search.c util.c utils_one.c\

all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no .o avalaible"

fclean:
	@rm -rf $(NAME)

re:	fclean all