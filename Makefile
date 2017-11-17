# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhilenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/03 14:06:43 by rkhilenk          #+#    #+#              #
#    Updated: 2017/11/03 14:06:45 by rkhilenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC =  main.c check1.c 

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(OBJ) -o $(NAME) libft.a

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# NAME = ft_display_file
# SRC = main.c
# OBJ = main.o

# all:$(OBJ)
# 	@gcc $(SRC) -o $(NAME)
# clean:
# 	@rm -f *.o
# fclean:clean
# 	@rm -f $(NAME)
# re: fclean all