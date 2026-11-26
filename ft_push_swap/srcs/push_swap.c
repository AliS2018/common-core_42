/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 02:26:40 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/21 03:13:35 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*ps;

	if (argc < 2)
		return (0);
	ps = ft_calloc(1, sizeof(t_ps));
	if (!ps)
		return (1);
	parse_args(argc, argv, ps);
	run_ps(ps);
	print_bench(ps);
	free_and_exit(ps, NULL, 0);
	return (0);
}
