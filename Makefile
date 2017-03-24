##
## Makefile for Makefile in /Users/lorill_j/my_printf.git/trunk
## 
## Made by LORILLARD Jimmy
## Login   <lorill_j@etna-alternance.net>
## 
## Started on  Fri Mar 24 16:27:08 2017 LORILLARD Jimmy
## Last update Fri Mar 24 16:27:17 2017 LORILLARD Jimmy
##

NAME		=	my_printf

SRC 		= my_putchar.c \
		my_isneg.c \
                my_swap.c \
	        my_putstr.c \
	        my_strlen.c \
	        my_strcpy.c \
	        my_strncpy.c \
		my_put_unbr.c \
		my_put_nbr.c \
		my_print_opts.c \
		my_getnbr.c \
	        my_strcmp.c \
	        my_strncmp.c \
	        my_strcat.c \
	        my_strncat.c \
	        my_strstr.c \
	        my_strdup.c \
	        my_str_to_wordtab.c \
		my_printf.c

INC_DIR			=	.

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

.PHONY:			all clean fclean re