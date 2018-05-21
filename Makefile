##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

SRC	=	src/main.c  \
        src/play.c  \
        src/init.c  \
        src/get_word.c  \
        src/my_str_to_wordtab.c \
        src/file_opener.c

OBJ	=	$(SRC:.c=.o)

NAME	=	lingo

CFLAGS	=	-Werror -Wall -Wextra

all:	$(NAME)

$(NAME):	$(SRC)
	gcc -g -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
