NAME = libft.a

SRC = ft_isalnum.c \
    ft_isprint.c \
    ft_isalpha.c \
    ft_strlen.c \
    ft_isdigit.c \
    ft_isascii.c \
    ft_memset.c \
    ft_bzero.c \
    ft_memcpy.c \
    ft_strlcpy.c \
    ft_strlcat.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_strncmp.c \
    ft_memcmp.c \
    ft_memchr.c \
    ft_strnstr.c \
    ft_calloc.c \
    ft_strdup.c \
    ft_strtrim.c \
    ft_atoi.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putendl_fd.c \
    ft_strmapi.c \
    ft_striteri.c \
    ft_split.c \
    ft_itoa.c \
    ft_memmove.c \
    ft_putnbr_fd.c \

BONUS = ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstsize_bonus.c\

OBJ = $(SRC:.c=.o) 

BONUS_OBJS = $(BONUS:.c=.o) 


all: $(NAME)

$(NAME): $(OBJ)
	ar -cr $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc -Wall -Wextra -Werror -c $(SRC)

bonus: $(BONUS_OBJS)
	ar -cr $(NAME) $(BONUS_OBJS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all