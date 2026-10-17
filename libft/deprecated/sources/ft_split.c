/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:26:28 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/14 02:39:44 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_cnt(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*ft_word_cpy(char const *s, size_t index, size_t len)
{
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + index, len);
	ptr[len] = '\0';
	return (ptr);
}

static char	**ft_free_mem(size_t index, char **ptr)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	k;
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = ft_calloc((ft_word_cnt(s, c) + 1), sizeof (char *));
	if (!ptr)
		return (NULL);
	k = 0;
	while (*s)
	{
		if (*s != c)
		{
			ptr[k] = ft_word_cpy(s, 0, ft_word_len(s, c));
			if (!ptr[k])
				return (ft_free_mem(k, ptr));
			k++;
			s = s + ft_word_len(s, c);
		}
		while (*s == c && *s)
			s++;
	}
	return (ptr);
}
