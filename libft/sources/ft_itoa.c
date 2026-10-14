/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 02:39:56 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/14 23:22:39 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	int	ft_counter(long n)
{
	int	i;
	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	len;
	long	sign;
	long	nb;

	len = ft_counter(n);
	sign = 0;
	nb = n;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (nb < 0)
	{
		sign = 1;
		nb *= -1;
		ptr[0] = '-';
	}
	while (len > sign)
	{
		ptr[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (ptr);
}
