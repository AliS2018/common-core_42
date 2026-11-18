/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:25:19 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/18 20:19:03 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

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
			return (NULL);
		}
		ptr_buf[bytes_read] = '\0';
		stash = nextline_strjoin(stash, ptr_buf);
	}
	free(ptr_buf);
	if (read == 0)
		return (NULL);
	return (ptr_buf);
}
