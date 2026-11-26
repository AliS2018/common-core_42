# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alavryk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/21 04:09:49 by alavryk           #+#    #+#              #
#    Updated: 2026/11/25 15:39:00 by alsadyko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
BONUS_NAME	= checker

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -Iincludes -Ilibft

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

COMMON_SRCS	= srcs/parser.c \
			  srcs/parser_utils.c \
			  srcs/push_swap_utils.c \
			  srcs/op.c \
			  srcs/op_exec.c \
			  srcs/bench.c \
			  srcs/selection.c \
			  srcs/chunk.c \
			  srcs/radix.c \
			  srcs/run_ps.c \
			  srcs/sort_small.c \
			  srcs/low_disorder.c

MAIN_SRC	= srcs/push_swap.c
BONUS_SRC	= srcs/checker_bonus.c

COMMON_OBJS	= $(COMMON_SRCS:.c=.o)
MAIN_OBJ	= $(MAIN_SRC:.c=.o)
BONUS_OBJ	= $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(COMMON_OBJS) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $(COMMON_OBJS) $(MAIN_OBJ) $(LIBFT) -o $(NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(LIBFT) $(COMMON_OBJS) $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(COMMON_OBJS) $(BONUS_OBJ) $(LIBFT) -o $(BONUS_NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c includes/push_swap.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(COMMON_OBJS) $(MAIN_OBJ) $(BONUS_OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all bonus clean fclean re
