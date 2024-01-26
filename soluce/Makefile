##
## EPITECH PROJECT, 2024
## HUB-Workshop-Criterion
## File description:
## Makefile
##

CC	:=	gcc

CFLAGS	=	-I./include/

NAME	=	run

SRC	=	calculator.c

TEST_SRC	:=	$(SRC)
TEST_SRC	+=	./tests/my_test.c

SRC	+=	main.c

SRC	+=	main.c

OBJ	=	$(SRC:.c=.o)

TEST_OBJ	=	$(TEST_SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

unit_tests:	CFLAGS	+=	-g3 --coverage -lcriterion
unit_tests: $(TEST_OBJ)
	$(CC) $(TEST_OBJ) $(CFLAGS) -o unit_tests

clean:
	@ rm -f $(OBJ)
	@ rm -f $(TEST_OBJ)
	@ find . -name "*.gcda" -delete -o -name "*.gcno" -delete

fclean: clean
	@ rm -f $(NAME)
	@ rm -f unit_tests

re: fclean all

.PHONY: all clean fclean re
