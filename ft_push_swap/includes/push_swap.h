/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 00:35:03 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/25 11:38:44 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef enum e_strategy
{
	STRAT_ADAPTIVE,
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX,
	STRAT_LOW
}	t_strategy;

typedef enum e_op
{
	OP_SA,
	OP_SB,
	OP_SS,
	OP_PA,
	OP_PB,
	OP_RA,
	OP_RB,
	OP_RR,
	OP_RRA,
	OP_RRB,
	OP_RRR,
	OP_COUNT
}	t_op;

typedef struct s_bench
{
	int			is_active;
	double		disorder;
	t_strategy	used_strat;
	int			total_ops;
	int			ops[OP_COUNT];
}	t_bench;

typedef struct s_stack
{
	int	*arr;
	int	len;
}	t_stack;

typedef struct s_ps
{
	t_stack		a;
	t_stack		b;
	int			total;
	t_strategy	flag_strat;
	t_bench		bench;
}	t_ps;

/* Parser */
void	parse_args(int argc, char **argv, t_ps *ps);
void	free_and_exit(t_ps *ps, char **split, int is_error);
int		ft_atoi_strict(const char *str, int *error);
void	free_split(char **split);
int		has_duplicates(int *arr, int len);

/* Init & Metrics */
double	compute_disorder(t_stack *a);
void	index_stack(t_ps *ps);

/* Operations */
void	op_swap(t_stack *s);
void	op_push(t_stack *src, t_stack *dst);
void	op_rotate(t_stack *s);
void	op_rev_rotate(t_stack *s);
void	exec_op(t_ps *ps, t_op op, int print);

/* Bench */
void	print_bench(t_ps *ps);

/* Sorting */
int		is_sorted(t_stack *a);
int		find_min_pos(t_stack *s);
void	move_pos_to_top_a(t_ps *ps, int pos);
void	selection(t_ps *ps);
void	chunk(t_ps *ps);
void	radix(t_ps *ps);
void	run_ps(t_ps *ps);
void	sort_small(t_ps *ps);
void	low_disorder(t_ps *ps);

#endif
