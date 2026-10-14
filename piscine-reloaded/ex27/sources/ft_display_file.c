/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:11:12 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/29 18:13:15 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	display_file(int fd)
{
	char	buf[1024];

	while (read(fd, buf, 1) != 0)
	{
		write(1, buf, 1);
	}
}

int	main(int argc, char **argv)
{
	int		file_descriptor;

	if (argc != 2)
	{
		if (argc > 2)
			ft_putstr_fd("Too many arguments.\n", 2);
		if (argc < 2)
			ft_putstr_fd("File name missing.\n", 2);
		return (1);
	}
	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		ft_putstr_fd("Cannot read file.\n", 2);
		return (1);
	}
	else
	{
		display_file(file_descriptor);
		close(file_descriptor);
	}
}
