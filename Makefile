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

LIBFTDIR = libft/

SRC =	main.c check1.c check2.c figurator.c positionator.c pole.c solver.c

OBJ = $(SRC:.c=.o)

HEADER = fillit.h
HEADERLIBFT = libft/libft.h
CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJ) $(LIBFTDIR)libft.a
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L./$(LIBFTDIR) -lft

%.o: %.c
		$(CC) $(CFLAGS) -o $@ -c $<

$(LIBFTDIR)libft.a: libft/Makefile
	make -C $(LIBFTDIR)

clean:
		rm -f $(OBJ)
		make clean -C $(LIBFTDIR)

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBFTDIR)libft.a

re: fclean all