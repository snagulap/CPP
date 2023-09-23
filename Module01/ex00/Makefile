# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 16:11:15 by snagulap          #+#    #+#              #
#    Updated: 2023/09/16 16:42:22 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name = Zombie

# CC = g++
# FLAGS = -Wall -Wextra -Werror -std=c++98
# SRCS = main.cpp randomChump.cpp Zombie.cpp
# OBJS = $(SRCS:.cpp=.o)
# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

# %.o: %.cpp
# 	$(CC) $(FLAGS) -c $< -o $@
	
# clean:
# 	rm -f $(OBJS)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

NAME = Zombie
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
