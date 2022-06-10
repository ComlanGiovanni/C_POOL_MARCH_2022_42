# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcomlan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 14:13:09 by gcomlan           #+#    #+#              #
#    Updated: 2022/03/29 17:28:19 by gcomlan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(wildcard srcs/*.c)

OBJS	= ${SRCS:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

INCS	= includes

NAME	= libft.a

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS} ${NAME}

all: ${NAME}

clean:
	rm -f  ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
