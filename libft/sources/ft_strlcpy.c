/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 17:01:05 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/03 00:31:35 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy (char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	size_s;

	i = 0;
	size_s = 0;

	while (src[size_s])
		size_s++;
	if (siz == 0)
		return (size_s);
	while (i < siz - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size_s);
}
