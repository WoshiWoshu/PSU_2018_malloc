##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC		=       gcc

RM		=	rm -f

INCDIRS		=	$(addprefix -I, $(shell find ./include -type d -print))

CFLAGS		=       -Wall -Wextra

CPPFLAGS	+=      $(INCDIRS)

NAME		=	libmy_malloc.so

SRCS		=	src/my_malloc.c         \
			src/round_four.c	\
			src/my_realloc.c        \
			src/my_free.c

all             :       $(NAME)

$(NAME)         :
		$(CC) $(CPPFLAGS) -c -fPIC $(SRCS)
		$(CC) -shared -o $(NAME) *.o $(CFLAGS)

clean           :
		$(RM) *.o

fclean          :       clean
			$(RM) $(NAME)

re              :       fclean all

.PHONY		:	all clean fclean re
