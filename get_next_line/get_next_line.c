/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:25:19 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/18 22:25:50 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*extract_line(char *stash)
{
	size_t	i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == '\n')
		i++;
	return (nextline_substr(stash, 0, i));
}

static char	*trim_stash(char *stash)
{
	char	*new;
	size_t	i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if(stash[i] == '\0')
	{
		free(stash);
		return (NULL);
	}
	i++;
	  new = nextline_substr(stash, i, nextline_strlen(stash) - i);
	free(stash);
	return (new);
}

char	*get_next_line(int fd)
{
	char				*ptr_buf;
	ssize_t	bytes_read;
	static char	*stash; 

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ptr_buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!ptr_buf)
		return (NULL);
	bytes_read = 1;
	while (!nextline_strchr(stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, ptr_buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(ptr_buf);
			free(stash);
			stash = NULL;
			return (NULL);
		}
		ptr_buf[bytes_read] = '\0';
		stash = nextline_strjoin(stash, ptr_buf);
	}
	free(ptr_buf);
	if (stash == NULL || stash[0] == '\0')
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
}
