# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 12:29:48 by jarumuga          #+#    #+#              #
#    Updated: 2024/05/15 17:23:48 by jarumuga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putchar.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c

OFILES  = ft_putchar.o ft_putchar.o ft_strcmp.o \
		ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -c $(SRC) && ar rc $(NAME) $(OFILES) && ranlib $(NAME)

clean :
	/bin/rm -f $(OFILES)

fclean : clean
		/bin/rm -f $(NAME)

re: fclean all
