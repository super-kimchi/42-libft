NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard ft_*.c)
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c		
	$(CC) -c $(CFLAGS) $<
clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all
