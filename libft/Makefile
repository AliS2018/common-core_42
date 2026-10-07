.PHONY: test fclean
SRC 		:= sources/ft_strlen.c  sources/ft_isalpha.c sources/ft_isalnum.c sources/ft_isdigit.c \
		   sources/ft_isprint.c sources/ft_isascii.c sources/ft_memset.c sources/ft_toupper.c \
		   sources/ft_tolower.c	sources/ft_strchr.c
INCLUDES := -I includes/
TEST := tests/main.c
COMPILER := cc -Wall -Werror -Wextra
TEST_RUNNER := runtst

test:
	@echo "|TEST IN PROGRESS|"
	@sleep 1
	@${COMPILER} ${TEST} ${SRC} ${INCLUDES} -o ${TEST_RUNNER}
	./${TEST_RUNNER}
	@echo "DONE" 
fclean:
	@echo "Removing unused binaries..."
	@rm -fv ${TEST_RUNNER}
