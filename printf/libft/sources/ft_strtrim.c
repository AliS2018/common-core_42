/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 16:54:04 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/19 11:23:17 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	str_start(char const *str, char const *set)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && ft_strchr(set, str[i]) != NULL)
	{
		i++;
	}
	return (i);
}

static size_t	str_end(char const *str, char const *set, size_t start)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > start && ft_strchr(set, str[i - 1]) != NULL)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*ptr;

	if (!s1 || !set)
		return (NULL);
	start = str_start(s1, set);
	end = str_end(s1, set, start);
	ptr = malloc(((end - start) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		ptr[i] = s1[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
