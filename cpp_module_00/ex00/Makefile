# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 15:03:07 by tgerdes           #+#    #+#              #
#    Updated: 2022/03/01 20:34:02 by tgerdes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

CC			= c++

RM			= rm -fr

CFLAGS		= -Wall -Wextra -Werror -std=c++98

GREEN			=	\033[0;32m
RED				=	\033[0;31m
RESET			=	\033[0m

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

$(NAME): ${OBJS}
		${CC} -o ${NAME} ${OBJS}
		@echo "$(GREEN)Compiling $(NAME)...Done$(RESET)"

clean:
		${RM} ${OBJS} ${OBJS_BONUS}
		@echo "$(RED)cleaned$(RESET)"

fclean: clean
		${RM} ${NAME}${NAME_BONUS}
		@echo "$(RED)fcleaned$(RESET)"

re:		fclean all
		