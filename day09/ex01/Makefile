# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 17:58:52 by mel-kora          #+#    #+#              #
#    Updated: 2023/03/22 14:06:15 by mel-kora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= RPN
INCS		= RPN.hpp
SRCS		= main.cpp RPN.cpp
OBJS		= ${SRCS:.cpp=.o}
CC			= @c++
RM			= @rm -rf
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address

.cpp.o:		$(INCS)
			$(CC) $(CPPFLAGS) -c $< -o $@

all:		$(NAME)
			@echo "\033[1;95m	<< all done! >> \033[0m"

$(NAME):	$(INCS) $(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[1;96m	----> files created \033[0m"
	
clean:
			$(RM) $(OBJS)
			@echo "\033[1;94m	----> files deleted \033[0m"

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re