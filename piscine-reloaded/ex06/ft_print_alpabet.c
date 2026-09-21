/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alpabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:30:03 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/21 18:45:12 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char a = 'a';
	while ( a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}


}
int main(void){
	ft_print_alphabet();
	return (0);
}
