NAME=libft.a
CC=gcc
FLAGS=-Wall -Wextra -Werror
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS=$(SRCS:srcs/%.c=./%.o)
HEADERS=./includes

all: build_lib

build_lib:
	$(CC) $(FLAGS) -c $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
