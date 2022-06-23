# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 17:44:58 by lvarela           #+#    #+#              #
#    Updated: 2022/06/23 11:34:53 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	:=	$(wildcard *.cpp)
OBJS	:=	$(SRCS:%.cpp=%.o)
CC		:=	c++
CPPSTD	:=	-std=c++98
FLAGS	:=	-Wall -Werror -Wextra
RM		:=	rm -rf
NAME	:=	replace

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(FLAGS) $(CPPSTD) $(OBJS) -o $(NAME)

$(%.o)	:	$(%.c)
			$(CC) -c $^ -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME) text/*.replace

re		:	fclean all

.PHONY	:	all $(NAME) clean fclean re
