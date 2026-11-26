/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 03:49:41 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/25 11:51:32 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	selection(t_ps *ps)
{
	int	min_pos;

	if (is_sorted(&ps->a))
		return ;
	while (ps->a.len > 1 && !is_sorted(&ps->a))
	{
		min_pos = find_min_pos(&ps->a);
		move_pos_to_top_a(ps, min_pos);
		exec_op(ps, OP_PB, 1);
	}
	while (ps->b.len > 0)
		exec_op(ps, OP_PA, 1);
}
