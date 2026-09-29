/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:56:28 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/29 14:12:44 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if(f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

#include <stdio.h>

int	starts_with_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[] = {"apple", "banana", "avocado", "pear", "air", 0};

	printf("%d\n", ft_count_if(tab, starts_with_a));
	return (0);
}
