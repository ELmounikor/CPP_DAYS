# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 11:22:34 by mel-kora          #+#    #+#              #
#    Updated: 2023/01/20 11:33:12 by mel-kora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Farm
SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp
INCS		= Animal.hpp Cat.hpp Dog.hpp Brain.hpp WrongCat.hpp WrongAnimal.hpp
OBJS		= ${SRCS:.cpp=.o}
CC			= @c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
RM			= @rm -rf

.cpp.o:		
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
