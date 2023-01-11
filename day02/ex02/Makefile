# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 09:44:15 by mel-kora          #+#    #+#              #
#    Updated: 2023/01/11 15:45:26 by mel-kora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
SRCS		= main.cpp  Fixed.cpp
INCS		= Fixed.hpp
OBJS		= ${SRCS:.cpp=.o}
CC			= @c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM			= @rm -rf

.cpp.o:
			$(CC) $(CPPFLAGS) -c $< -o $@

all: 		$(NAME)
			@echo "\033[1;95m	<< all done! >> \033[0m"

$(NAME):	$(OBJS) $(INCS)
			${CC} ${CPPFLAGS} ${OBJS}
			@echo "\033[1;96m	----> files created \033[0m"

clean:
			${RM} ${OBJS}
			@echo "\033[1;94m	----> files deleted \033[0m"

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
