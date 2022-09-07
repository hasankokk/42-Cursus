# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkok <hkok@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 15:37:41 by hkok              #+#    #+#              #
#    Updated: 2022/08/31 15:46:11 by hkok             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pushswap.a
APP		= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I.

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME) run

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

run:
	$(CC) -o $(APP) $(NAME)

clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME) $(APP)

re:	fclean all

bonus: all

.PHONY:	all clean fclean re bonus run