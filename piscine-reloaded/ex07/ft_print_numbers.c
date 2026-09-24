/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:41:12 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/23 21:05:05 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int			n;
	char		c;

	n = 0;
	while (n < 10)
	{
		c = n + '0';
		ft_putchar(c);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
