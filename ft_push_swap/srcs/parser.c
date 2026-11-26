/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 02:12:48 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/25 07:36:59 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	parse_flags(int argc, char **argv, t_ps *ps)
{
	int	i;

	i = 1;
	while (i < argc && ft_strncmp(argv[i], "--", 2) == 0)
	{
		if (ft_strncmp(argv[i], "--bench", 8) == 0)
			ps->bench.is_active = 1;
		else if (ft_strncmp(argv[i], "--simple", 9) == 0)
			ps->flag_strat = STRAT_SIMPLE;
		else if (ft_strncmp(argv[i], "--medium", 9) == 0)
			ps->flag_strat = STRAT_MEDIUM;
		else if (ft_strncmp(argv[i], "--complex", 10) == 0)
			ps->flag_strat = STRAT_COMPLEX;
		else if (ft_strncmp(argv[i], "--adaptive", 11) == 0)
			ps->flag_strat = STRAT_ADAPTIVE;
		else
			free_and_exit(ps, NULL, 1);
		i++;
	}
	return (i);
}

static int	count_numbers(int start, int argc, char **argv, t_ps *ps)
{
	int		total;
	int		j;
	char	**split;

	total = 0;
	while (start < argc)
	{
		split = ft_split(argv[start], ' ');
		if (!split || !split[0])
			free_and_exit(ps, split, 1);
		j = 0;
		while (split[j])
			j++;
		total += j;
		free_split(split);
		start++;
	}
	return (total);
}

static void	parse_numbers(int start, int argc, char **argv, t_ps *ps)
{
	char	**split;
	int		j;
	int		k;
	int		err;

	k = 0;
	err = 0;
	while (start < argc)
	{
		split = ft_split(argv[start], ' ');
		if (!split)
			free_and_exit(ps, NULL, 1);
		j = 0;
		while (split[j])
		{
			ps->a.arr[k++] = ft_atoi_strict(split[j++], &err);
			if (err)
				free_and_exit(ps, split, 1);
		}
		free_split(split);
		start++;
	}
}

void	parse_args(int argc, char **argv, t_ps *ps)
{
	int	start;
	int	total;

	start = parse_flags(argc, argv, ps);
	if (start >= argc)
		free_and_exit(ps, NULL, 0);
	total = count_numbers(start, argc, argv, ps);
	ps->a.arr = malloc(sizeof(int) * total);
	ps->b.arr = malloc(sizeof(int) * total);
	if (!ps->a.arr || !ps->b.arr)
		free_and_exit(ps, NULL, 1);
	ps->a.len = total;
	ps->b.len = 0;
	ps->total = total;
	parse_numbers(start, argc, argv, ps);
	if (has_duplicates(ps->a.arr, ps->a.len))
		free_and_exit(ps, NULL, 1);
}
