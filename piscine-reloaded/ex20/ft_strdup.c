/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:37:53 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/23 20:59:23 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str0)
{
	int	l;
	
	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strdup(char *src)
{
	char *new_str = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	strc
}
