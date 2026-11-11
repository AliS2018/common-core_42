/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:25:19 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/11 07:05:09 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	counter(void)
{
	static int	i = 0;
	
	return (i++);
}

char	*get_next_line(int fd)
{
	char	*ptr_buf;
	size_t	i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	i = 0;
	if (read(fd, &ptr_buf, &i)
}
