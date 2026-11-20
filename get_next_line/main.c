/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:09:25 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/20 22:17:53 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
        int             fd;
	char    *line;
        // Alternative: read a fixed file instead of a command-line argument.
	// Change the prototype to main(void), uncomment the open() below,
	// and remove the if/else block.
	// fd = open("file.txt", O_RDONLY);
	if (argc > 1)
                fd = open(argv[argc - 1], O_RDONLY);
	else
		fd = 0;
       	while ((line = get_next_line(fd)) != NULL)
        {
                printf("%s", line);
                free(line);
        }
	if (fd > 0)
       		close(fd);
        return (0);
}
