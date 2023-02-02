# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 17:58:52 by mel-kora          #+#    #+#              #
#    Updated: 2023/02/02 21:52:38 by mel-kora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Span
INCS		= Span.hpp
SRCS		= main.cpp Span.cpp
OBJS		= ${SRCS:.cpp=.o}
CC			= @c++
RM			= @rm -rf
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

.cpp.o:		$(INCS)
			$(CC) $(CPPFLAGS) -c $< -o $@

all:		$(NAME)
			@echo "\033[1;95m	<< all done! >> \033[0m"

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[1;96m	----> files created \033[0m"
	
clean:
			$(RM) $(OBJS)
			@echo "\033[1;94m	----> files deleted \033[0m"

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re