/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavryk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:48:12 by alavryk           #+#    #+#             */
/*   Updated: 2026/11/21 01:50:13 by alavryk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_swap(t_stack *s)
{
	int	tmp;

	if (s->len < 2)
		return ;
	tmp = s->arr[0];
	s->arr[0] = s->arr[1];
	s->arr[1] = tmp;
}

void	op_push(t_stack *src, t_stack *dst)
{
	int	i;

	if (src->len < 1)
		return ;
	i = dst->len;
	while (i > 0)
	{
		dst->arr[i] = dst->arr[i - 1];
		i--;
	}
	dst->arr[0] = src->arr[0];
	dst->len++;
	i = 0;
	while (i < src->len - 1)
	{
		src->arr[i] = src->arr[i + 1];
		i++;
	}
	src->len--;
}

void	op_rotate(t_stack *s)
{
	int	first;
	int	i;

	if (s->len < 2)
		return ;
	first = s->arr[0];
	i = 0;
	while (i < s->len - 1)
	{
		s->arr[i] = s->arr[i + 1];
		i++;
	}
	s->arr[s->len - 1] = first;
}

void	op_rev_rotate(t_stack *s)
{
	int	last;
	int	i;

	if (s->len < 2)
		return ;
	last = s->arr[s->len - 1];
	i = s->len - 1;
	while (i > 0)
	{
		s->arr[i] = s->arr[i - 1];
		i--;
	}
	s->arr[0] = last;
}
