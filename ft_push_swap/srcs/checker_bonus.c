/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:17:32 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/24 22:27:46 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	parse_rot_op(char *line, t_op *op)
{
	if (ft_strncmp(line, "ra\n", 4) == 0)
		*op = OP_RA;
	else if (ft_strncmp(line, "rb\n", 4) == 0)
		*op = OP_RB;
	else if (ft_strncmp(line, "rr\n", 4) == 0)
		*op = OP_RR;
	else if (ft_strncmp(line, "rra\n", 5) == 0)
		*op = OP_RRA;
	else if (ft_strncmp(line, "rrb\n", 5) == 0)
		*op = OP_RRB;
	else if (ft_strncmp(line, "rrr\n", 5) == 0)
		*op = OP_RRR;
	else
		return (0);
	return (1);
}

static int	parse_op(char *line, t_op *op)
{
	if (ft_strncmp(line, "sa\n", 4) == 0)
		*op = OP_SA;
	else if (ft_strncmp(line, "sb\n", 4) == 0)
		*op = OP_SB;
	else if (ft_strncmp(line, "ss\n", 4) == 0)
		*op = OP_SS;
	else if (ft_strncmp(line, "pa\n", 4) == 0)
		*op = OP_PA;
	else if (ft_strncmp(line, "pb\n", 4) == 0)
		*op = OP_PB;
	else
		return (parse_rot_op(line, op));
	return (1);
}

static void	exit_bad_op(t_ps *ps, char *line)
{
	free(line);
	get_next_line(-1);
	free_and_exit(ps, NULL, 1);
}

static void	read_and_run_ops(t_ps *ps)
{
	char	*line;
	t_op	op;

	line = get_next_line(0);
	while (line != NULL)
	{
		if (!parse_op(line, &op))
			exit_bad_op(ps, line);
		exec_op(ps, op, 0);
		free(line);
		line = get_next_line(0);
	}
}

int	main(int argc, char **argv)
{
	t_ps	*ps;

	if (argc < 2)
		return (0);
	ps = ft_calloc(1, sizeof(t_ps));
	if (!ps)
		return (1);
	if (ft_strncmp(argv[1], "--", 2) == 0)
		free_and_exit(ps, NULL, 1);
	parse_args(argc, argv, ps);
	if (read(0, NULL, 0) < 0)
		free_and_exit(ps, NULL, 1);
	read_and_run_ops(ps);
	if (is_sorted(&ps->a) && ps->b.len == 0)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	free_and_exit(ps, NULL, 0);
	return (0);
}
