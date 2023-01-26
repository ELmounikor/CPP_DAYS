# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 13:10:11 by mel-kora          #+#    #+#              #
#    Updated: 2023/01/26 21:14:46 by mel-kora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Whatever
SRCS		= main.cpp
INCS		= whatever.hpp
OBJS		= ${SRCS:.cpp=.o}
CC			= @c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
RM			= @rm -rf
	
%.o : %.cpp  $(INCS)
			$(CC) $(CPPFLAGS) -c $< -o $@

all: 		$(NAME)
			@echo "\033[1;95m	<< all done! >> \033[0m"

$(NAME):	$(INCS) $(OBJS)
			
			${CC} ${CPPFLAGS} ${OBJS} -o $(NAME)
			@echo "\033[1;96m	----> files created \033[0m"

clean:
			${RM} ${OBJS} 
			@echo "\033[1;94m	----> files deleted \033[0m"

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
