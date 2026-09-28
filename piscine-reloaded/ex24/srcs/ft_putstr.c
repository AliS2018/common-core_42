/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:47:21 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/28 19:13:39 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

//void	ft_putchar(char c);

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                ft_putchar(str[i++]);
        ft_putchar('\n');
}

