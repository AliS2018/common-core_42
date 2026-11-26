/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:40:05 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/25 11:51:49 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	srt_three_a(t_ps *ps)
{
	int	a;
	int	b;
	int	c;

	a = ps->a.arr[0];
	b = ps->a.arr[1];
	c = ps->a.arr[2];
	if (a > b && b < c && a < c)
		exec_op(ps, OP_SA, 1);
	else if (a > b && b > c)
	{
		exec_op(ps, OP_SA, 1);
		exec_op(ps, OP_RRA, 1);
	}
	else if (a > b && b < c && a > c)
		exec_op(ps, OP_RA, 1);
	else if (a < b && b > c && a < c)
	{
		exec_op(ps, OP_SA, 1);
		exec_op(ps, OP_RA, 1);
	}
	else if (a < b && b > c && a > c)
		exec_op(ps, OP_RRA, 1);
}

void	sort_small(t_ps *ps)
{
	int	min_pos;

	if (is_sorted(&ps->a))
		return ;
	if (ps->a.len == 2)
		return (exec_op(ps, OP_SA, 1));
	while (ps->a.len > 3 && !is_sorted(&ps->a))
	{
		min_pos = find_min_pos(&ps->a);
		move_pos_to_top_a(ps, min_pos);
		exec_op(ps, OP_PB, 1);
	}
	srt_three_a(ps);
	while (ps->b.len > 0)
		exec_op(ps, OP_PA, 1);
}
