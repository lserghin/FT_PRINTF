# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 13:49:47 by lserghin          #+#    #+#              #
#    Updated: 2024/11/16 15:14:44 by lserghin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_putlhex.c ft_putuhex.c ft_putunbr.c \
		ft_putptr.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	ar -rsc $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(OBJS_BONUS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
