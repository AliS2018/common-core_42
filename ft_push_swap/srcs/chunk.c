/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 03:30:13 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/21 04:25:15 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_isqrt(int n)
{
	int	r;

	r = 1;
	while (r * r <= n)
		r++;
	return (r - 1);
}

static int	find_max_pos(t_stack *s)
{
	int	max_pos;
	int	i;

	max_pos = 0;
	i = 1;
	while (i < s->len)
	{
		if (s->arr[i] > s->arr[max_pos])
			max_pos = i;
		i++;
	}
	return (max_pos);
}

static void	push_back_max_b(t_ps *ps)
{
	int	pos;
	int	steps;

	while (ps->b.len > 0)
	{
		pos = find_max_pos(&ps->b);
		if (pos <= ps->b.len / 2)
		{
			while (pos-- > 0)
				exec_op(ps, OP_RB, 1);
		}
		else
		{
			steps = ps->b.len - pos;
			while (steps-- > 0)
				exec_op(ps, OP_RRB, 1);
		}
		exec_op(ps, OP_PA, 1);
	}
}

static void	push_chunks_to_b(t_ps *ps, int chunk)
{
	int	count;

	count = 0;
	while (ps->a.len > 0)
	{
		if (ps->a.arr[0] <= count)
		{
			exec_op(ps, OP_PB, 1);
			exec_op(ps, OP_RB, 1);
			count++;
		}
		else if (ps->a.arr[0] <= count + chunk)
		{
			exec_op(ps, OP_PB, 1);
			count++;
		}
		else
			exec_op(ps, OP_RA, 1);
	}
}

void	chunk(t_ps *ps)
{
	int	chunk;

	if (is_sorted(&ps->a))
		return ;
	chunk = ft_isqrt(ps->a.len) * 14 / 10;
	push_chunks_to_b(ps, chunk);
	push_back_max_b(ps);
}
