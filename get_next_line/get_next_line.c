/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:25:19 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/11 10:45:06 by alsadyko         ###   ########.fr       */
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

	bytes_read = read(fd, ptr_buf, nextline_strlen(bytes_read))
}
