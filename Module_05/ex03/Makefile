# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 10:29:31 by user42            #+#    #+#              #
#    Updated: 2021/10/23 15:44:31 by ade-garr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/main.cpp
SRCS += srcs/Bureaucrat.cpp
SRCS += srcs/Form.cpp
SRCS += srcs/ShrubberyCreationForm.cpp
SRCS += srcs/RobotomyRequestForm.cpp
SRCS += srcs/PresidentialPardonForm.cpp
SRCS += srcs/Intern.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= a.out

INCLUDES = ./includes/

CC		= clang++

CFLAGS	+= -Wall
CFLAGS	+= -Wextra
CFLAGS	+= -Werror
CFLAGS	+= -std=c++98

HEADER += ${INCLUDES}Bureaucrat.hpp
HEADER += ${INCLUDES}Form.hpp
HEADER += ${INCLUDES}ShrubberyCreationForm.hpp
HEADER += ${INCLUDES}RobotomyRequestForm.hpp
HEADER += ${INCLUDES}PresidentialPardonForm.hpp
HEADER += ${INCLUDES}Intern.hpp

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