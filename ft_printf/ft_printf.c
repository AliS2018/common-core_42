/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:33:03 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/06 19:20:32 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_menu(int c, va_list *args)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(*args, int)));
	if (c == 's')
		return (ft_printf_str(va_arg(*args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_printf_int(va_arg(*args, int)));
	if (c == 'u')
		return (ft_printf_uint(va_arg(*args, unsigned int), 0));
	if (c == 'x')
		return (ft_printf_uint(va_arg(*args, unsigned int), 1));
	if (c == 'X')
		return (ft_printf_uint(va_arg(*args, unsigned int), 2));
	if (c == 'p')
		return (ft_printf_ptr_addr(va_arg(*args, void *)));
	if (c == '%')
		return (ft_printf_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int				i;
	int				sum;
	va_list			args;

	va_start(args, format);
	i = 0;
	sum = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			sum += ft_printf_menu((int)format[++i], &args);
			i++;
			continue ;
		}
		write(1, &format[i], 1);
		i++;
		sum++;
	}
	va_end(args);
	return (sum);
}
