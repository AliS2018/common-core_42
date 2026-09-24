/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:42:29 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/24 19:54:54 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min > max)
		range = malloc(((min - max) + 1) * sizeof(int));
	while (min != max)
	{
		range[i++] = min;
		if (min > max)
		{

		}
}
