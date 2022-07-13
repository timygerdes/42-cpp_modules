# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 15:03:07 by tgerdes           #+#    #+#              #
#    Updated: 2022/06/10 17:09:39 by tgerdes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

INCLUDES = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJS = ${SRCS:.cpp=.o}

CC			= c++

RM			= rm -fr

CFLAGS		= -Wall -Wextra -Werror -std=c++98

GREEN			=	\033[0;32m
RED				=	\033[0;31m
RESET			=	\033[0m

.cpp.o:
		${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

$(NAME): ${OBJS} ${INCLUDES}
		${CC} -o ${NAME} ${OBJS}
		@echo "$(GREEN)Compiling $(NAME)...Done$(RESET)"

clean:
		${RM} ${OBJS}
		@echo "$(RED)cleaned$(RESET)"

fclean: clean
		${RM} ${NAME}
		@echo "$(RED)fcleaned$(RESET)"

re:		fclean all
		