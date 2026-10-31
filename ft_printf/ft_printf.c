/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:33:03 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/31 01:03:11 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_menu(int c, va_list args)
{
	char	*b10;
	char	*hex_low;
	char	*hex_up;

	b10 = "0123456789";
	hex_low = "0123456789abcdef";
	hex_up = "0123456789ABCDEF";
	if (c == 'c')
		return (ft_printf_char(va_arg(args, int)));
	if (c == 's')
		return (ft_printf_str(va_arg(*args, char *)));
/*	if (c == 'p')
		return (ft_printf_ptr_addr(va_arg(*args, void *)));
	if (c == 'd' || c == 'i')
		return (ft_printf_int(va_arg(*args, int)));
	if (c == 'u')
		return (ft_printf_uint(va_arg(*args, unsigned int), b10));
	if (c == 'x')
		return (ft_printf_uint(va_arg(*args, unsigned int), hex_low));
	if (c == 'X')
		return (ft_printf_uint(va_arg(*args, unsigned int), hex_up));
*/
//	if (c == '%')
	return (ft_printf_char('%'));
	//return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		sum;
	va_list		args;
        
	va_start(args, format);
	i = 0;
	sum = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			sum += ft_printf_menu((int)format[++i], args);
			i++;
			continue;
		}
		else
		{
		write(1, &format[i], 1);
		i++;
		sum++;
		}
	}
	va_end(args);
	return (sum);
}
