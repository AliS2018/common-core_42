/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_disorder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:53:05 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/25 11:53:13 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_circular_sorted(t_stack *a)
{
	int	drops;
	int	i;

	drops = 0;
	i = 0;
	while (i < a->len - 1)
	{
		if (a->arr[i] > a->arr[i + 1])
			drops++;
		i++;
	}
	if (a->arr[a->len - 1] > a->arr[0])
		drops++;
	return (drops <= 1);
}

static void	linear_pass(t_ps *ps)
{
	int	i;

	i = 0;
	while (i < ps->a.len - 1 && !is_sorted(&ps->a))
	{
		if (ps->a.arr[0] > ps->a.arr[1])
			exec_op(ps, OP_SA, 1);
		if (!is_sorted(&ps->a))
			exec_op(ps, OP_RA, 1);
		i++;
	}
	move_pos_to_top_a(ps, find_min_pos(&ps->a));
}

void	low_disorder(t_ps *ps)
{
	if (is_sorted(&ps->a))
		return ;
	if (is_circular_sorted(&ps->a))
	{
		move_pos_to_top_a(ps, find_min_pos(&ps->a));
		return ;
	}
	while (!is_sorted(&ps->a))
		linear_pass(ps);
}
