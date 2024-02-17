# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 13:39:11 by snagulap          #+#    #+#              #
#    Updated: 2023/10/24 16:35:17 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp 
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