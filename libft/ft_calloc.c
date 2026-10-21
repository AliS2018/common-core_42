/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 21:11:08 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/21 03:22:46 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	total_len;

	total_len = nmemb * size;
	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && (total_len / nmemb) != size)
		return (NULL);
	ptr = malloc(total_len);
	if (ptr == NULL)
		return (NULL);
	while (i < total_len)
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *)ptr);
}
