##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

CC	=	gcc

SRC	=	src/my_malloc.c		\
		src/my_realloc.c	\
		src/my_calloc.c		\
		src/show_alloc_mem.c	\
		src/my_free.c

NAME	=	libmy_malloc.so

FLAG	=	-Wall -Wextra -Werror -fpic -c

INC	=	-I./include

all	:	$(NAME)

$(NAME) :
		$(CC) $(FLAG) $(INC) $(SRC)
		$(CC) -shared -o $(NAME) *.o
		LD_LIBRARY_PATH=$(shell pwd)
		export LD_LIBRARY_PATH=$(shell pwd)

clean	:
		rm -f *.o

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
