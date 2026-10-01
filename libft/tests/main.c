/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:24:00 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/01 21:22:49 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_isalpha(void)
{
	printf("isalpha A: %d\n", ft_isalpha('A'));
	printf("isalpha 7: %d\n", ft_isalpha('7'));
}

void	test_strlen(void)
{
	printf("strlen hello: %zu\n", ft_strlen("hello"));
}

void	test_memset(void)
{
	char	buf[5];
	size_t	i;

	ft_memset(buf, 'Z', 5);
	i = 0;
	while (i < 5)
	{
		printf("buf[%zu] = %c\n", i, buf[i]);
		i++;
	}
	if (ft_memset(buf, 'Z', 5) == buf)
		printf("return pointer: PASS\n");
}

int	main(void)
{
	test_isalpha();
	test_strlen();
	test_memset();
	return (0);
}
