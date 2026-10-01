/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:16:59 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/01 21:12:33 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t						i;
	unsigned char				*dest_d;
	const unsigned char			*src_s;

	dest_d = dest;
	src_s = src;
	i = 0;
	while (i < n)
	{
		dest_d[i] = src_s[i];
		i++;
	}
	return (dest);
}
