/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:22:33 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/19 11:22:46 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int     main(int argc, char **argv)
{
        int     j;
        char    buff[1024];


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
