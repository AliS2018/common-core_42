/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:34:56 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/03 20:02:18 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int decimal)
{
	char	parsed_num;
	int	increment;

	if (decimal == INT_MIN)
		return (write(1, "-2147483648", 11));
	increment = 0;
	if (decimal < 0)
	{
		write(1, "-", 1);
		increment++;
		decimal = -decimal;
	}
	if (decimal >= 10)
	{
		increment += ft_printf_int(decimal / 10);
	}
	++increment;
	parsed_num = (decimal % 10) + '0';
	write(1, &parsed_num, 1);
	return (increment);
}
