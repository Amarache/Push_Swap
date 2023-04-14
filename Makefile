# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamarach < yamarach@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 16:23:55 by yamarach          #+#    #+#              #
#    Updated: 2023/02/08 16:49:01 by yamarach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c push.c swap.c rotate.c rrotate.c ft_lstlast.c ft_atoi.c\
		init.c parsing.c ft_lstclear.c\
		ft_lstsize.c low.c low_utils.c utils.c rhindix.c
OBJ = $(SRC:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re