# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 10:29:31 by user42            #+#    #+#              #
#    Updated: 2021/08/16 22:09:18 by adegarr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/main.cpp
SRCS += srcs/Bureaucrat.cpp
SRCS += srcs/Form.cpp
SRCS += srcs/ShrubberyCreationForm.cpp
SRCS += srcs/RobotomyRequestForm.cpp
SRCS += srcs/PresidentialPardonForm.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= a.out

INCLUDES = ./includes/

CC		= clang++

CFLAGS	+= -Wall
CFLAGS	+= -Wextra
CFLAGS	+= -Werror

HEADER += ${INCLUDES}Bureaucrat.hpp
HEADER += ${INCLUDES}Form.hpp
HEADER += ${INCLUDES}ShrubberyCreationForm.hpp
HEADER += ${INCLUDES}RobotomyRequestForm.hpp
HEADER += ${INCLUDES}PresidentialPardonForm.hpp

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