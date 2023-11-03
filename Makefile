CC = gcc
CFLAGS = -I.
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c main.c
OBJ = $(SRC:.c=.o)
DEPS = libft.h
NAME = program
all : $(NAME)
$(NAME) : $(OBJ) $(DEPS)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
