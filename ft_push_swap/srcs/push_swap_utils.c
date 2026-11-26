/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:32:03 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/21 04:16:06 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

double	compute_disorder(t_stack *a)
{
	long	mistakes;
	long	total_pairs;
	int		i;
	int		j;

	if (a->len < 2)
		return (0.0);
	mistakes = 0;
	total_pairs = 0;
	i = 0;
	while (i < a->len - 1)
	{
		j = i + 1;
		while (j < a->len)
		{
			total_pairs++;
			if (a->arr[i] > a->arr[j])
				mistakes++;
			j++;
		}
		i++;
	}
	return ((double)mistakes / (double)total_pairs);
}

void	index_stack(t_ps *ps)
{
	int	*indexed;
	int	i;
	int	j;
	int	rank;

	indexed = malloc(sizeof(int) * ps->a.len);
	if (!indexed)
		free_and_exit(ps, NULL, 1);
	i = 0;
	while (i < ps->a.len)
	{
		rank = 0;
		j = 0;
		while (j < ps->a.len)
		{
			if (ps->a.arr[i] > ps->a.arr[j])
				rank++;
			j++;
		}
		indexed[i] = rank;
		i++;
	}
	free(ps->a.arr);
	ps->a.arr = indexed;
}

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->len - 1)
	{
		if (a->arr[i] > a->arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	find_min_pos(t_stack *s)
{
	int	min_pos;
	int	i;

	min_pos = 0;
	i = 1;
	while (i < s->len)
	{
		if (s->arr[i] < s->arr[min_pos])
			min_pos = i;
		i++;
	}
	return (min_pos);
}

void	move_pos_to_top_a(t_ps *ps, int pos)
{
	int	steps;

	if (pos <= ps->a.len / 2)
	{
		while (pos-- > 0)
			exec_op(ps, OP_RA, 1);
	}
	else
	{
		steps = ps->a.len - pos;
		while (steps-- > 0)
			exec_op(ps, OP_RRA, 1);
	}
}
