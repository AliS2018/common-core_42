/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:41:12 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/21 18:44:57 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	int n = 0;
	while (n < 10)
	{
		char c = n + '0';
		write(1, &c, 1);
		n++;
	}

}

int main(void)
{
	ft_print_numbers();
	return (0);
}
