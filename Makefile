##
## EPITECH PROJECT, 2017
## project
## File description:
## project
##

SRC 	=	src/main.c		\
			src/action.c	\
			src/action_next.c

NAME 	=	push_swap

OBJ		=	$(SRC:.c=.o)

LIBPATH =	lib

LIBNAME = 	my

CFLAGS  =	-Iinclude/ -W -Wall -Werror -Wextra -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	cd lib/my && make
	gcc -o $(NAME) $(CFLAGS) $(SRC) -L $(LIBPATH) -l$(LIBNAME)

clean:
	cd lib/my && make clean
	rm -f $(OBJ)

fclean: clean
	cd lib/my && make fclean
	rm -f $(NAME)

re: fclean all
