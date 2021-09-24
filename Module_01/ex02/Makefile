# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 10:29:31 by user42            #+#    #+#              #
#    Updated: 2021/09/24 11:44:32 by ade-garr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/main.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= Brain

CC		= clang++

CFLAGS	+= -Wall
CFLAGS	+= -Wextra
CFLAGS	+= -Werror
CFLAGS	+= -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			printf "\033[32m$@ is ready ! \n\033[0m"

${OBJS}: %.o: %.cpp
			${CC} ${CFLAGS}  -c $< -o $@
			
clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
.SILENT: