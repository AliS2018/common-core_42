/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:17:22 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/19 11:17:34 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(void)
{
        printf("FAKE: %d | REAL: %d\n", ft_atoi("42"), atoi("42"));
        printf("FAKE: %d | REAL: %d\n", ft_atoi("-42"), atoi("-42"));
        printf("FAKE: %d | REAL: %d\n", ft_atoi("   +123"), atoi("   +123"));
        printf("FAKE: %d | REAL: %d\n", ft_atoi("\t\n\r 56"), atoi("\t\n\r 56"));
        printf("FAKE: %d | REAL: %d\n", ft_atoi("123abc"), atoi("123abc"));
        printf("FAKE: %d | REAL: %d\n", ft_atoi("--42"), atoi("--42"));
        printf("FAKE: %d | REAL: %d\n", ft_atoi("abc42"), atoi("abc42"));
        printf("FAKE: %d | REAL: %d\n", ft_atoi("000007"), atoi("000007"));
}
