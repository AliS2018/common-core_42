/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:42:29 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/28 20:49:55 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
