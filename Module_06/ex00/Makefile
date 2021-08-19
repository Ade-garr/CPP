# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 10:29:31 by user42            #+#    #+#              #
#    Updated: 2021/08/18 13:17:53 by adegarr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/main.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= a.out

INCLUDES = ./includes/

CC		= clang++

CFLAGS	+= -Wall
CFLAGS	+= -Wextra
CFLAGS	+= -Werror

HEADER += ${INCLUDES}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -I ${INCLUDES} ${OBJS} -o ${NAME}
			printf "\033[32m$@ is ready ! \n\033[0m"

${OBJS}: %.o: %.cpp ${HEADER}
			${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@
			
clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
.SILENT: