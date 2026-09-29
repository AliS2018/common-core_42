/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:56:47 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/29 13:54:00 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11);
                return ;
        }
        if (nb < 0)
        {
                ft_putchar('-');
                nb = -nb;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putchar(nb % 10 + '0');
        }
        if (nb < 10)
        {
                ft_putchar(nb + 48);
        }
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
int	main(void)
{
	int	tab[] = {1, 2, 3, 42, -7};

	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
