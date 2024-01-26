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
SRC	+=	main.c

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
