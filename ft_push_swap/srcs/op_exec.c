/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:51:44 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/21 01:54:09 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	print_op_name(t_op op)
{
	const char	*names[OP_COUNT] = {"sa", "sb", "ss", "pa", "pb",
		"ra", "rb", "rr", "rra", "rrb", "rrr"};

	ft_putendl_fd((char *)names[op], 1);
}

static void	run_double_op(t_ps *ps, t_op op)
{
	if (op == OP_SS)
	{
		op_swap(&ps->a);
		op_swap(&ps->b);
	}
	else if (op == OP_RR)
	{
		op_rotate(&ps->a);
		op_rotate(&ps->b);
	}
	else if (op == OP_RRR)
	{
		op_rev_rotate(&ps->a);
		op_rev_rotate(&ps->b);
	}
}

void	exec_op(t_ps *ps, t_op op, int print)
{
	if (op == OP_SA)
		op_swap(&ps->a);
	else if (op == OP_SB)
		op_swap(&ps->b);
	else if (op == OP_PA)
		op_push(&ps->b, &ps->a);
	else if (op == OP_PB)
		op_push(&ps->a, &ps->b);
	else if (op == OP_RA)
		op_rotate(&ps->a);
	else if (op == OP_RB)
		op_rotate(&ps->b);
	else if (op == OP_RRA)
		op_rev_rotate(&ps->a);
	else if (op == OP_RRB)
		op_rev_rotate(&ps->b);
	else
		run_double_op(ps, op);
	ps->bench.ops[op]++;
	ps->bench.total_ops++;
	if (print)
		print_op_name(op);
}
