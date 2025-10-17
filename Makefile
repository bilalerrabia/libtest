CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

BSRC = $(wildcard ft_lst*.c)
BOBJS = $(BSRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) -c $(CFLAGS)
	ar rcs $(NAME) $(OBJS)
bonus:
	$(CC) $(BSRC) -c $(CFLAGS)
	ar rcs $(NAME) $(BOBJS)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re