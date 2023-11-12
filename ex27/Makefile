EXEC=ft_display_file
CC=cc
FLAGS=-Wall -Wextra -Werror
SRC=ft_display_file.c
OBJ=$(SRC:.c=.o)

all: $(EXEC)

$(EXEC):
	$(CC) $(FLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

.PHONY: all clean fclean
