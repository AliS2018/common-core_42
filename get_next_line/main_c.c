#include <fcntl.h>
#include <stdio.h>
#include "get_next_line_bonus.h"

int	main(int argc, char *argv[])
{
	int		fd[1024];
	char	*line;
	int		i;
	int		done;

	i = 0;
	while (++i < argc)
		fd[i] = open(argv[i], O_RDONLY);
	done = 0;
	while (!done)
	{
		done = 1;
		i = 0;
		while (++i < argc)
		{
			line = get_next_line(fd[i]);
			if (line)
			{
				printf("[%s] %s", argv[i], line);
				free(line);
				done = 0;
			}
		}
	}
	i = 0;
	while (++i < argc)
		close(fd[i]);
	return (0);
}
