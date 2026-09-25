/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:42:29 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/25 20:22:06 by alsadyko         ###   ########.fr       */
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

int	main(void)
{
	int	min;
	int	max;
	int	*rng;
	int	i;
	
	min = 50;
	max = 50;	
	rng = ft_range(min, max);
	if (rng == NULL)
	{
		printf("Dumbass");
		return (1);
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", rng[i]);
		i++;
	}
	free(rng);
	return (0);
}
