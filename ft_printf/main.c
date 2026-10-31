/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:21:02 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/31 01:57:03 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	ft_printf("Hi %s, you are  years old, your initial char is %c with  a pure access to  memory node\n", "PIDOR", 'A');
	ft_printf("char: %c, str: %s, null: %s, pct: %%\n", 'A', "hello", NULL);
}
