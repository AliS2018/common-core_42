/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:26:28 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/13 21:50:41 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words(char const *s, char c)
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

static size_t	word_len(char const *s, char c, size_t start)
{
	 size_t	i;

	 i = start;
	 while (s[i] != '\0' && s[i] != c)
		 i++;
	 return (i - start); 
}

static void	free_mem(size_t index, char **ptr)
{
	size_t	i;
	
	i = 0;
	while (i < index)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char	const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t 	total_words;
	char	**ptr;

	if (!s)
		return (NULL);
	total_words = words(s, c);
	ptr = malloc((total_words + 1) * sizeof (char *));
	if (!ptr)
		return (NULL);
	
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while(s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			ptr[k] = malloc(word_len(s, c, i) + 1 * sizeof(size_t));
			if (ptr[k] == NULL)
				return(NULL);

		}

	}
}
