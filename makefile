#Compilador e flags
CC = gcc 
CFLAGS = -Wall -Wextra -Werror

#Arquivos de origem e teste
SRC = ./C*/ex*/*.c
TEST_SRC = test_main.c

NAME = run_tests

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(TEST_SRC) -o $(NAME)

test: all
		./$(NAME)

clean:
		rm -f $(NAME)

re: clean all

.PHONY: all test clean re