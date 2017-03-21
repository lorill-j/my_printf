##
## Makefile for Makefile in /home/jimmy/libmy.a/libmy_03
## 
## Made by Lorillard Jimmy
## Login   <lorill_j@etna-alternance.net>
## 
## Started on  Thu Oct  6 09:48:20 2016 Lorillard Jimmy
## Last update Fri Oct  7 09:04:15 2016 Lorillard Jimmy
##

NAME		=	my_printf

SRC 		= my_putchar.c \
		my_isneg.c \
                my_swap.c \
	        my_putstr.c \
	        my_strlen.c \
	        my_strcpy.c \
	        my_strncpy.c \
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