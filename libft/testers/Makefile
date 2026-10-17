.PHONY: all clean fclean test 
SRC 		:= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
		   ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		   ft_memmove.c ft_memset.c  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		   ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		   ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

INCLUDES := libft.h
LIBNAME := libft.a
OBJECTS := $(SRC:.c=.o)

TEST := tests/main.c
COMPILER := cc -Wall -Werror -Wextra
TEST_RUNNER := test.out

test:
	@echo "|TEST IN PROGRESS|"
	@sleep 1
	@${COMPILER} ${TEST} ${SRC} ${INCLUDES} -lbsd -o ${TEST_RUNNER}
	./${TEST_RUNNER}
	@echo "DONE" 
all: $(LIBNAME)
	@echo "##### COMPILATION IN PROGRESS... ######"
	@sleep 1
	@echo "########################"

$(LIBNAME): $(OBJS)
	${COMPILER} ${INCLUDES} ${OBJECTS} -o ${LIBNAME}

./%.o: ./%.c
	cc -Wall -Werror -Wextra ${INCLUDES} -c $< -o $@

clean:
	@echo "Deleting..."
	@rm -fv ${OBJS}
fclean: clean
	rm -fv ${LIBNAME}

fclean:
	@echo "Removing unused binaries..."
	@rm -fv ${TEST_RUNNER}
