/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 02:14:39 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/21 02:54:27 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	free_and_exit(t_ps *ps, char **split, int is_error)
{
	if (split)
		free_split(split);
	if (ps)
	{
		if (ps->a.arr)
			free(ps->a.arr);
		if (ps->b.arr)
			free(ps->b.arr);
		free(ps);
	}
	if (is_error)
		write(2, "Error\n", 6);
	exit(is_error);
}

int	ft_atoi_strict(const char *str, int *error)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!str[i])
		return (*error = 1, 0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (*error = 1, 0);
		res = res * 10 + (str[i] - '0');
		if ((sign == 1 && res > INT_MAX) || (sign == -1 && (-res) < INT_MIN))
			return (*error = 1, 0);
		i++;
	}
	return ((int)(res * sign));
}

int	has_duplicates(int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
