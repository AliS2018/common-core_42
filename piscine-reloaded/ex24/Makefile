.PHONY: clean fclean re all
LIBNAME := libft.a
SOURCE := srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

INCLUDES := -I includes
OBJS := $(SOURCE:.c=.o)

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	ar rcs ${LIBNAME} ${OBJS}
	ar -t ${LIBNAME}

srcs/%.o: srcs/%.c
	cc -Wall -Werror -Wextra ${INCLUDES} -c $< -o $@

clean:
	@echo "Deleting..."
	@rm -fv ${OBJS}
fclean: clean
	rm -fv ${LIBNAME}
re: fclean all

