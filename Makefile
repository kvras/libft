CC = cc
CFLAGS = -I. -c 
SRC = ft_*
OBJ = $(SRC:.c=.o)
DEPS = libft.h
NAME = libft.a

all : $(NAME)

$(NAME) : $(DEPS)
	$(CC) $(CFLAGS) $(SRC) 
	ar -rc libft.a *.o

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all