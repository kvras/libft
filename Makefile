CC = gcc
CFLAGS = -I.
SRC = ft_isalnum.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c
OBJ = $(SRC:.c=.o)
DEPS = libft.h
NAME = libft.a
all : $(NAME)
$(NAME) : $(OBJ) $(DEPS)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	@ar -rc $(NAME) $(object)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
