# Library name, on a line by itself
NAME = libft.a

CC = cc
# Flags written out literally, as the checklist asks
CFLAGS = -Wall -Wextra -Werror

# Mandatory part
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c ft_toupper.c

# Bonus part: the linked list functions
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Local test runner (not part of the subject)
TEST = ../deprecated/tests/main_lstclear.c
TEST_RUNNER = test.out

.PHONY: all bonus clean fclean re test

# all builds libft.a in the project root
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# bonus adds the list functions to the same libft.a
bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

# libft.h sits in the project root, so -I. finds it; listing it as a
# dependency recompiles everything when the header changes
%.o: %.c libft.h
	$(CC) $(CFLAGS) -I. -c $< -o $@

# rm -f never fails, even when nothing has been built
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME) $(TEST_RUNNER)

re: fclean all

# The test main uses list functions, so it needs the bonus build
test: bonus
	$(CC) $(CFLAGS) -I. $(TEST) -L. -lft -o $(TEST_RUNNER)
	./$(TEST_RUNNER)
