/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ps.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 03:08:51 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/25 11:56:24 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	select_strategy(t_ps *ps)
{
	if (ps->flag_strat != STRAT_ADAPTIVE)
		ps->bench.used_strat = ps->flag_strat;
	else if (ps->bench.disorder < 0.2)
		ps->bench.used_strat = STRAT_LOW;
	else if (ps->bench.disorder < 0.5)
		ps->bench.used_strat = STRAT_MEDIUM;
	else
		ps->bench.used_strat = STRAT_COMPLEX;
}

void	run_ps(t_ps *ps)
{
	ps->bench.disorder = compute_disorder(&ps->a);
	index_stack(ps);
	select_strategy(ps);
	if (is_sorted(&ps->a))
		return ;
	if (ps->a.len <= 5)
		return (sort_small(ps));
	if (ps->bench.used_strat == STRAT_LOW)
		low_disorder(ps);
	else if (ps->bench.used_strat == STRAT_SIMPLE)
		selection(ps);
	else if (ps->bench.used_strat == STRAT_MEDIUM)
		chunk(ps);
	else
		radix(ps);
}
