# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 11:41:55 by mel-kora          #+#    #+#              #
#    Updated: 2023/01/21 20:10:32 by mel-kora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bureaucrat
SRCS		= main.cpp Bureaucrat.cpp Form.cpp
INCS		= Bureaucrat.hpp Form.hpp
OBJS		= ${SRCS:.cpp=.o}
CC			= @c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
RM			= @rm -rf
	
%.o : %.cpp 
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
