# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/29 16:40:24 by snagulap          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2024/03/16 20:02:53 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp 
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
=======
#    Updated: 2023/12/29 16:40:25 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

>>>>>>> 39e43f1be0b1b04dfd0f6d467c679867ede2409f
