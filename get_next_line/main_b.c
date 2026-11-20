/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:09:25 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/20 21:41:31 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		fd[1024];
	char	*line;
	int		i;
	int		done;
	if (argc < 2)
	{
		printf("usage: %s file1 [file2 ...]\n", argv[0]);
		return (1);
	}
	i = 1;
	while (i < argc && i < 1024)
	{
		fd[i] = open(argv[i], O_RDONLY);
		if (fd[i] < 0)
			printf("could not open %s\n", argv[i]);
		i++;
	}
	done = 0;
	while (!done)
	{
		done = 1;
		i = 1;
		while (i < argc && i < 1024)
		{
			line = get_next_line(fd[i]);
			if (line)
			{
				printf("[fd %d | %s] %s", fd[i], argv[i], line);
				free(line);
				done = 0;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc && i < 1024)
	{
		if (fd[i] >= 0)
			close(fd[i]);
		i++;
	}
	return (0);
}
