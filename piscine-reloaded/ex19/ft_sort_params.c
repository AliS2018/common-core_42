/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:42:10 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/23 21:11:31 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
        write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_args(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < argc - 1)
	{
		i = 2;
		while (i < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				temp = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_args(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
