/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:09:25 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/20 23:03:37 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

static int	print_next(int fd)
{
	char	*line;

	line = get_next_line(fd);
	if (!line)
		return (0);
	printf("fd %d: %s", fd, line);
	free(line);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	fd[1024];
	int	i;
	int	reading;

	i = 0;
	while (++i < argc && i < 1024)
		fd[i] = open(argv[i], O_RDONLY);
	reading = 1;
	while (reading)
	{
		reading = 0;
		i = 0;
		while (++i < argc && i < 1024)
			reading |= print_next(fd[i]);
	}
	i = 0;
	while (++i < argc && i < 1024)
		close(fd[i]);
	return (0);
}
