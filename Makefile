# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccred <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 10:14:48 by ccred             #+#    #+#              #
#    Updated: 2019/11/13 18:18:28 by ccred            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = 	./src/read.c ./src/realsize.c ./src/remake.c \
		./src/valid.c ./src/move.c ./src/alsomove.c \
		./src/joinandclean.c ./src/main.c

INCLUDE = libft/

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	@make -C libft/ all
	gcc $(FLAGS) -o $(NAME) $(OBJ) libft/libft.a

%.o: %.c filit.h
	gcc $(FLAGS)  -c $< -o $@

clean:
	@make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
