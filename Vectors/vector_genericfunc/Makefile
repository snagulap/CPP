# Name of the executable
Name = Vectors

# Compiler
CPP = g++

# Compiler flags
CFLAGS = -Wextra -Wall -Werror -std=c++17

# Source files
SRCS = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(Name)

# Rule to link the object files to create the final executable
$(Name): $(OBJS)
	$(CPP) $(CFLAGS) -o $(Name) $(OBJS)

# Rule to compile source files to object files
%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

# Clean rule to remove generated object files
clean:
	del $(OBJS)

# Full clean rule to remove the executable and object files
fclean: clean
	del $(Name).exe

# Rebuild rule
re: fclean all

# Phony targets to avoid conflicts with files of the same name
.PHONY: all clean fclean re
