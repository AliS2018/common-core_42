.PHONY: test fclean
SRC := sources/ft_strlen.c \
       sources/ft_isalpha.c \
       sources/ft_memset.c 
INCLUDES := -I includes/
TEST := tests/main.c
COMPILER := cc -Wall -Werror -Wextra
TEST_RUNNER := runtst

test:
	@echo "|====== TEST IN PROGRESS	========|"
	@sleep 1
	@echo "|			   	   	|"
	@sleep .5
	${COMPILER} ${TEST} ${SRC} ${INCLUDES} -o ${TEST_RUNNER}
	./${TEST_RUNNER}
fclean:
	@echo "Removing unused binaries..."
	@rm -fv ${TEST_RUNNER}
