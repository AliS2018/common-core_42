/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:34:56 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/09 19:23:48 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uint(unsigned long n, int mode)
{
	int					increment;
	char				*selector[3];
	char				*digits;
	unsigned long		base;

	selector[0] = "0123456789";
	selector[1] = "0123456789abcdef";
	selector[2] = "0123456789ABCDEF";
	digits = selector[mode];
	base = ft_strlen(digits);
	increment = 0;
	if (n >= base)
		increment += ft_printf_uint((n / base), mode);
	increment++;
	write(1, &digits[n % base], 1);
	return (increment);
}
