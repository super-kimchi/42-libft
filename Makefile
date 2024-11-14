NAME = libft.a
CC = cc
CFLAGS = -Wextra -Werror -Wall
SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm *.o
fclean: clean
	rm $(NAME)
re: fclean all
	
