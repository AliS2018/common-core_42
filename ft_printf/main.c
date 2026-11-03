/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:21:02 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/03 20:12:23 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	main(void)
{
	int	a;
	int	b;
 
	a = printf("real: [%c] [%s] [%s] [%d] [%i] [%d] [%%]\n",
			'A', "hello", (char *)NULL, 42, -42, INT_MIN);
	fflush(stdout);
	b = ft_printf("mine: [%c] [%s] [%s] [%d] [%i] [%d] [%%]\n",
			'A', "hello", (char *)NULL, 42, -42, INT_MIN);
	printf("return -> real %d | mine %d\n", a, b);
	return (0);
}

