/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:52:07 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/01 21:15:41 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int     main(int argc, char **argv)
{
        int     j;

        j = 0;
        if (argc == 2)
        {
                while (argv[1][j] != '\0')
                {
                        printf("%d\n", ft_isprint(argv[1][j]));
                        j++;
                }
        }
}
*/
