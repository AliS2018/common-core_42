/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 00:31:47 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/07 19:52:38 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	d;
	size_t	s;
	size_t	i;

	s = 0;
	d = 0;
	i = 0;
	while (d < siz && dst[d])
		d++;
	while (src[s])
		s++;
	if (d >= siz)
		return (siz + s);
	while (i + d < siz - 1 && src[i])
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
