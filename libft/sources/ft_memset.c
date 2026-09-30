/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:47:13 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/30 19:59:11 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*o;
	size_t	i;
	
	i = 0;
	o = s;
	while(i < n)
	{
		o[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
int     main(int argc, char **argv)
{
        int     j;
	char	buff[1024];


        j = 0;
        if (argc == 3)
        {
                while (argv[1][j] != '\0')
                {
                        printf("%p\n", ft_memset(buff, argv[1][j], 5));
                        j++;
                }
        }
}
*/
