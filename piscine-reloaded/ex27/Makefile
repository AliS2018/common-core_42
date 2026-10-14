.PHONY: all clean fclean
LIBNAME := ft_display_file
SOURCE := sources/ft_putstr_fd.c \
	  sources/ft_putchar_fd.c \
	  sources/ft_display_file.c

INCLUDES := -I includes
OBJS := $(SOURCE:.c=.o)

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	cc -Wall -Werror -Wextra ${OBJS} -o ${LIBNAME}

sources/%.o: sources/%.c
	cc -Wall -Werror -Wextra ${INCLUDES} -c $< -o $@

clean:
	@echo "Deleting..."
	@rm -fv ${OBJS}
fclean: clean
	rm -fv ${LIBNAME}
