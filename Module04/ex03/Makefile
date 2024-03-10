# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 20:26:55 by snagulap          #+#    #+#              #
#    Updated: 2023/10/26 20:24:59 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS = main.cpp AMateria.cpp Ice.cpp ICharacter.cpp Cure.cpp
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