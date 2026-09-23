/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 19:48:41 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/23 21:06:23 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		if (i > 2147483647 / nb)
		{
			return (0);
		}
		else
		{
			i = i * nb;
			nb--;
		}
	}
	return (i);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	
}
