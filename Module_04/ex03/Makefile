# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 10:29:31 by user42            #+#    #+#              #
#    Updated: 2021/08/14 03:04:39 by adegarr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/main.cpp
SRCS += srcs/AMateria.cpp
SRCS += srcs/Character.cpp
SRCS += srcs/MateriaSource.cpp
SRCS += srcs/Ice.cpp
SRCS += srcs/Cure.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= a.out

INCLUDES = ./includes/

CC		= clang++

CFLAGS	+= -Wall
CFLAGS	+= -Wextra
CFLAGS	+= -Werror

HEADER += ${INCLUDES}AMateria.hpp
HEADER += ${INCLUDES}Character.hpp
HEADER += ${INCLUDES}ICharacter.hpp
HEADER += ${INCLUDES}Ice.hpp
HEADER += ${INCLUDES}Cure.hpp
HEADER += ${INCLUDES}MateriaSource.hpp
HEADER += ${INCLUDES}IMateriaSource.hpp

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