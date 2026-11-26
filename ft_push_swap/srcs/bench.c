/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 00:52:09 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/25 12:09:28 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	print_disorder(double disorder)
{
	int	res;
	int	int_part;
	int	dec_part;

	res = (int)(disorder * 10000.0 + 0.5);
	int_part = res / 100;
	dec_part = res % 100;
	ft_putstr_fd("[bench] disorder: ", 2);
	ft_putnbr_fd(int_part, 2);
	ft_putchar_fd('.', 2);
	if (dec_part < 10)
		ft_putchar_fd('0', 2);
	ft_putnbr_fd(dec_part, 2);
	ft_putendl_fd("%", 2);
}

static void	print_strategy_line(t_ps *ps)
{
	ft_putstr_fd("[bench] strategy: ", 2);
	if (ps->flag_strat == STRAT_ADAPTIVE)
		ft_putstr_fd("Adaptive / ", 2);
	else if (ps->flag_strat == STRAT_SIMPLE)
		ft_putstr_fd("Simple / ", 2);
	else if (ps->flag_strat == STRAT_MEDIUM)
		ft_putstr_fd("Medium / ", 2);
	else
		ft_putstr_fd("Complex / ", 2);
	if (ps->bench.used_strat == STRAT_LOW)
		ft_putendl_fd("O(n)", 2);
	else if (ps->bench.used_strat == STRAT_SIMPLE)
		ft_putendl_fd("O(n\xc2\xb2)", 2);
	else if (ps->bench.used_strat == STRAT_MEDIUM)
		ft_putendl_fd("O(n\xe2\x88\x9an)", 2);
	else
		ft_putendl_fd("O(n log n)", 2);
}

static void	print_op_counts(t_bench *b)
{
	const char	*labels[OP_COUNT] = {"sa: ", " sb: ", " ss: ", " pa: ",
		" pb: ", "ra: ", " rb: ", " rr: ", " rra: ", " rrb: ", " rrr: "};
	int			i;

	ft_putstr_fd("[bench] ", 2);
	i = 0;
	while (i < OP_COUNT)
	{
		if (i == 5)
			ft_putstr_fd("\n[bench] ", 2);
		ft_putstr_fd((char *)labels[i], 2);
		ft_putnbr_fd(b->ops[i], 2);
		i++;
	}
	ft_putchar_fd('\n', 2);
}

void	print_bench(t_ps *ps)
{
	if (!ps->bench.is_active)
		return ;
	print_disorder(ps->bench.disorder);
	print_strategy_line(ps);
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd(ps->bench.total_ops, 2);
	ft_putchar_fd('\n', 2);
	print_op_counts(&ps->bench);
}
