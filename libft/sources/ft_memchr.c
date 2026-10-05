/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:57:28 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/05 22:22:03 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*smem;
	size_t	i;
	
	i = 0;
	smem = (const unsigned char *)s;

	while (i < n)
	{
		if (smem[i] == (unsigned char) c)
			return ((void *)&smem[i]);
		i++;
	}
	return (NULL);
}
