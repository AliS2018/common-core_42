/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 20:46:17 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/09 11:32:31 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
		
	i = 0;
	ptr = malloc(ft_strlen(s) + 1 * sizeof(int))
	if (ptr == NULL)
		return (NULL);
	
	while (ptr[start] < len)
	{
		
	}

}
