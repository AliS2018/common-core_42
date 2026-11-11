/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 03:54:03 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/11 05:03:38 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	nextline_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*nextline_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}

char	*nextline_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	ptr_str_len;
	size_t	mod_str_len;

	if (s == NULL)
		return (NULL);
	ptr_str_len = nextline_strlen(s);
	if (start >= ptr_str_len)
		mod_str_len = 0;
	else
		mod_str_len = ptr_str_len - start;
	if (mod_str_len > len)
		mod_str_len = len;
	ptr = malloc(mod_str_len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < mod_str_len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*nextline_strjoin(char *s1, char const *s2)
{
	char			*ptr;
	size_t			i;
	size_t			j;

	if (!s1)
		return (nextline_substr(s2, 0, nextline_strlen(s2)));
	i = 0;
	ptr = malloc((nextline_strlen(s1) + nextline_strlen(s2) + 1));
	if (!ptr)
	{
		free(s1);
		return (NULL);
	}
	j = 0;
	while (s1[j])
		ptr[i++] = s1[j++];
	j = 0;
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	free(s1);
	return (ptr);
}
