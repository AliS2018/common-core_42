/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 23:08:06 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/05 23:22:48 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*addr1;
	const unsigned char	*addr2;

	addr1 = s1;
	addr2 = s2;
	i = 0;
	while (i < n )
	{
		if (addr1[i] != addr2[i])
			return (addr1[i] - addr2[i]);
		i++;
	}
	return (0);
}
