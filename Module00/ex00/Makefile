# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 17:29:56 by snagulap          #+#    #+#              #
#    Updated: 2023/09/15 18:57:21 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++

FLAGS = -Wall -Werror -Wextra

SRCS = megaphone.cpp

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ -c $<
	
clean: 
	rm -f $(OBJS)

fclean: clean
	# rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
	