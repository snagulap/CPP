# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 12:07:25 by snagulap          #+#    #+#              #
#    Updated: 2023/10/19 12:43:05 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp fixed.cpp 
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