# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 11:51:34 by anarodr2          #+#    #+#              #
#    Updated: 2023/03/09 11:38:26 by anarodr2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a # ponemos libft.a porq es el ejecutable d la libreria
CC = gcc # cc = ejecutar
CFLAGS = -Wextra -Werror -Wall # flags para ejecutar
#src = vables.c
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c \
	  \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c

SRCBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
INCLUDE = ./libft.h # añadir la info d la libreria sobre los archivos
LIB = ar -rcs # ar crea // r si hay cambios substituye // s indexa
OBJ = $(SRC:.c=.o) # conversion de .c a .o
OBJBONUS = $(SRCBONUS:.c=.o)
RM = rm -fr
BONUS = .bonus

all: $(NAME) # $ llama

%.o: %.c ${INCLUDE} # compila y realiza la conversion
	$(CC) $(CFLAGS) -I${INCLUDE} -c $< -o $@

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

bonus: $(BONUS) 
	
$(BONUS): $(OBJ) $(OBJBONUS)
	$(LIB) $(NAME) $(OBJ) $(OBJBONUS)
	@touch $@

clean: # elimina los .o
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME) $(BONUS)

re: fclean all

.PHONY : all clean fclean re bonus # llama a todo lo q debe ejecutar
