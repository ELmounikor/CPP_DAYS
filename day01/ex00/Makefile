# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 15:56:52 by mel-kora          #+#    #+#              #
#    Updated: 2022/12/27 12:00:03 by mounikor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= BraiiiiiiinnnzzzZ
SRCS		= main.cpp  Zombie.cpp
INCS		= Zombie.hpp
OBJS		= ${SRCS:.cpp=.o}
CC			= @c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM			= @rm -rf

.cpp.o:
			$(CC) $(CPPFLAGS) -c $< -o $@

all: 		$(NAME)
			@echo "\033[1;95m	<< all done! >> \033[0m"

$(NAME):	$(OBJS) $(INCS)
			${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}
			@echo "\033[1;96m	----> files created \033[0m"

clean:
			${RM} ${OBJS}
			@echo "\033[1;94m	----> files deleted \033[0m"

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
