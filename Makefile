# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 11:06:27 by etbernar          #+#    #+#              #
#    Updated: 2022/10/25 13:52:24 by etbernar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= tout les fichiers a compiler

OBJS	= ${SRCS:.c=.o}

NAME	= libft

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: 	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}

re:		fclean all
