##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	check_errors.c		\
		load_file_in_mem.c	\
		put_in_tab.c		\
		check_spe.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-I ./include

LIB 	=	-L ./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS)

clean:
	rm -f $(OBJ)
	make -sC ./lib/my clean

fclean: clean
	rm -f $(NAME)
	make -sC ./lib/my fclean

re: fclean all
