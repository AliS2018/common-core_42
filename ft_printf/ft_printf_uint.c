/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:34:56 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/03 22:18:56 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uint(unsigned long n, int mode)
{
	char	*selector[3];
	char	*digits;
	unsigned long base;

	selector[0] = "0123456789";
	selector[1] = "0123456789abcdef";
	selector[2] = "0123456789ABCDEF";
	digits = selector[mode];

	base = ft_strlen(digits);

	/*char	parsed_num;
	int	increment;

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
*/
}
