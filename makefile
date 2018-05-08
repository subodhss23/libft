# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: susharma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/07 16:21:48 by susharma          #+#    #+#              #
#    Updated: 2018/05/07 20:44:41 by susharma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAG = -c -Wall -Wextra -Werror

NAME = libft.a

LIB = ar rc

RLIB = ranlib

SRCS = *.c \

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
		@$(CC) $(FLAG) $(SRCS)
		@$(LIB) $(NAME) $(OBJS)
		@$(RLIB) $(NAME)

clean:
		@/bin/rm -f $(OBJS)

fclean:		clean
		@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
