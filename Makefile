NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.cc

OBJ = $(SRC:.c=.o)
AR = ar rc

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
