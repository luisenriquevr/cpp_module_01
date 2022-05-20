# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 15:12:48 by lvarela           #+#    #+#              #
#    Updated: 2022/05/19 15:15:19 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	:=	main.cpp Zombie.cpp Zombie.hpp newZombie.cpp randomChump.cpp
OBJS	:=	$(SRCS:.cpp=.o)
CC		:=	c++
CPPSTD	:=	-std=c++98
FLAGS	:=	-Wall -Werror -Wextra
RM		:=	rm -f
NAME	:=	BraiiiiiiinnnzzzZ

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(CPPSTD) $(FLAGS) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean $(NAME)

.PHONY	:	all clean fclean re
