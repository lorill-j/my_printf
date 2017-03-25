##
## Makefile for Makefile in /Users/lorill_j/my_printf.git/trunk
## 
## Made by LORILLARD Jimmy
## Login   <lorill_j@etna-alternance.net>
## 
## Started on  Fri Mar 24 16:27:08 2017 LORILLARD Jimmy
## Last update Sat Mar 25 15:59:50 2017 LORILLARD Jimmy
##

NAME		=	my_printf

SRC 		= src/lib/my_putchar.c \
	        src/lib/my_putstr.c \
		src/lib/my_strlen.c \
		src/lib/my_put_unbr.c \
		src/lib/my_put_nbr.c \
		src/my_print_opts.c \
		src/function_hexa_octal.c \
		src/my_print_opts2.c \
		src/my_printf.c

INC_DIR			=	inc/

OBJ			=	$(SRC:%.c=%.o)

CFLAGS			=   	-Wall -Werror -Wpedantic

CC			=	gcc

RM			=	rm -f

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

PHONY:			all clean fclean re
