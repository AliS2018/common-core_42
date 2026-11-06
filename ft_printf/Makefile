.PHONY: all clean fclean re
CC := cc
FLAGS := -Wall -Wextra -Werror
INCLUDES := -I.
HEAD := ft_printf.h
NAME := libftprintf.a
SRC := ft_printf.c ft_printf_char.c ft_printf_str.c ft_printf_ptr_addr.c ft_printf_int.c \
       ft_printf_uint.c utils/ft_putchar.c utils/ft_strlen.c

OBJECTS := $(SRC:.c=.o)
all: ${NAME}
$(NAME): $(OBJECTS)
	ar rcs ${NAME} ${OBJECTS}
%.o: %.c ${HEAD}
	${CC} ${FLAGS} ${INCLUDES} -c $< -o $@
clean:
	rm -fv ${OBJECTS}
fclean: clean
	rm -f ${NAME}
re:	fclean all
