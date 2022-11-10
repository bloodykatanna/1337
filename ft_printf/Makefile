
NAME = libftprintf.a

SRC = 	ft_printf.c function1.c function2.c

OBJ = $(SRC:.c=.o)

# CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# $(OBJ): $(SRC)
# 	gcc -Wall -Wextra -Werror -c $(SRC)

clean : 
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all