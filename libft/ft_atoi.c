/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:39:20 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/20 17:58:52 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	cn;
	int	sn;

	i = 0;
	cn = 0;
	sn = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sn = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		cn = cn * 10 + (nptr[i] - '0');
		i++;
	}
	return (cn * sn);
}

int	main(void)
{
	printf("FAKE: %d | REAL: %d\n", ft_atoi("42"), atoi("42"));
	printf("FAKE: %d | REAL: %d\n", ft_atoi("-42"), atoi("-42"));
	printf("FAKE: %d | REAL: %d\n", ft_atoi("   +123"), atoi("   +123"));
	printf("FAKE: %d | REAL: %d\n", ft_atoi("\t\n\r 56"), atoi("\t\n\r 56"));
	printf("FAKE: %d | REAL: %d\n", ft_atoi("123abc"), atoi("123abc"));
	printf("FAKE: %d | REAL: %d\n", ft_atoi("--42"), atoi("--42"));
	printf("FAKE: %d | REAL: %d\n", ft_atoi("abc42"), atoi("abc42"));
	printf("FAKE: %d | REAL: %d\n", ft_atoi("000007"), atoi("000007"));
}
