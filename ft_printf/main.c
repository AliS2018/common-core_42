/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:21:02 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/04 19:58:13 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		a;
	int		b;
 	int		c;
	char	*p = "HKJLGKAEJG";
	
	a = printf("real: [%c] [%s] [%s] [%d] [%i] [%d] [%%] [%p]\n",
			'A', "hello", (char *)NULL, 42, -42, INT_MIN, p);
	fflush(stdout);
	b = ft_printf("mine: [%c] [%s] [%s] [%d] [%i] [%d] [%%]\n",
			'A', "hello", (char *)NULL, 42, -42, INT_MIN);
	printf("return -> real %d | mine %d\n", a, b);
	c = ft_printf("Hi [%s], how are you? You are [%d] years old and your sister [%s] is [%i]. STOP Acting like a [%c][%c][%c][%c], k? [%u] [%u] [%x] [%X] [%x] [%p]\n",
		       	"PIDOR", 69, "PIDERINA", 5, 'C','U','N','T', 42, -1, 255, 255, 0, p);
	return (0);
}
