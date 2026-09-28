.PHONY: clean fclean re all
SOURCE := srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

HEADERS := "includes/ft.h"

all: $(SOURCE)
	echo "Running ls to see the contents... of the" $(SOURCE)
	cc -Wall -Werror -Wextra ${SOURCE} -o ${SOURCE}
clean:
