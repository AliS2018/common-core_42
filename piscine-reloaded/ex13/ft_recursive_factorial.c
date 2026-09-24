/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:17:52 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/24 19:08:57 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	max;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	max = ft_recursive_factorial(nb - 1);
	if (max > 2147483647 / nb)
	{
		return (0);
	}
	else
	{
		return (nb * max);
	}
}
