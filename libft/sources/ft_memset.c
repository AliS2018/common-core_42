/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:47:13 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/19 11:22:25 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*o;
	size_t			i;

	i = 0;
	o = s;
	while (i < n)
	{
		o[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
