# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 10:16:35 by fnascime          #+#    #+#              #
#    Updated: 2024/02/05 18:47:46 by fnascime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I includes -I libft/includes
SOURCES = ft_printf.c ft_string.c ft_nbr.c
SRC = $(addprefix src/, $(SOURCES))
OBJS = ${SRC:.c=.o}
RM = rm -rf

${NAME} : ${OBJS}
	cd libft && $(MAKE)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	cd libft && $(MAKE) clean
	$(RM) $(OBJS)

fclean: clean
	cd libft && $(MAKE) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re