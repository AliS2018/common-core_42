/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr_addr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:24:28 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/04 19:38:49 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr_addr(void *ptr)
{
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + ft_printf_uint((unsigned long)ptr, 1));
}
