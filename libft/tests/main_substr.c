/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:24:05 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/19 11:24:21 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(void)
{
        char    *ptr;

        ptr  = "SUPERCALIFRAGILISTICEXPIALIDOCIOUS";

        printf("%s\n", ft_substr(ptr, 5, 15));
}
