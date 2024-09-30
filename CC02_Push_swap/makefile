# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 16:30:02 by anarodr2          #+#    #+#              #
#    Updated: 2023/06/22 12:28:07 by anarodr2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wextra -Werror -Wall

# FUNCIONES
SRC = push_swap.c #ft_swap.c

INCLUDE = ./push_swap.h
LIB = ar -rcs
OBJ = $(SRC:.c=.o)
RM = rm -fr
LIBFT = ./libft/libft.a

all: $(NAME)

%.o: %.c ${INCLUDE}
	$(CC) $(CFLAGS) -I${INCLUDE} -c $< -o $@

$(NAME): $(OBJ)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJ) -L./libft -lft -o $(NAME)

clean:
	make clean -C libft
	$(RM) $(OBJ)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

re: fclean all
	
.PHONY : all clean fclean re