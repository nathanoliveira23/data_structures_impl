NAME = linked_list

CC = g++

C_FLAGS = -std=c++17 -Wall -Werror -Wextra -Wunused -pedantic

C_SOURCE = $(PWD)/src/*.cpp

INCLUDE_PATH = -I$(PWD)/headers

all:
	$(CC) $(C_SOURCE) $(C_FLAGS) $(INCLUDE_PATH) -o $(NAME)
	./$(NAME)
