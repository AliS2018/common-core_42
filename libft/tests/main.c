/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:24:00 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/02 18:48:05 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	test_memmove(void)
{
	
}*/

void	test_isalpha(void)
{
	printf("--> FT_ISALPHA TEST <--\n");
	if (ft_isalpha('A') == 1
		&& ft_isalpha('Z') == 1
		&& ft_isalpha('a') == 1
		&& ft_isalpha('z') == 1)
		printf("-- ALPHABET BOUNDS: PASS\n");
	else
		printf("++ ALPHABET BOUNDS: FAIL\n");
	if (ft_isalpha('7') == 0
		&& ft_isalpha('@') == 0)
		printf("-- NON-ALPHABETIC PRINTABLES: PASS\n");
	else
		printf("++ NON-ALPHABETIC PRINTABLES: FAIL\n");
	if (ft_isalpha('\t') == 0
		&& ft_isalpha('\n') == 0)
		printf("-- NON-PRINTABLE CHARACTERS: PASS\n");
	else
		printf("++ NON-PRINTABLE CHARACTERS: FAIL\n");
}

void	test_strlen(void)
{
	char	*str;

	str = "welcome";
	printf("--> FT_STRLEN TEST <--\n");
	if (ft_strlen(str) == 7)
		printf("-- WORD LENGTH OF 7: PASS\n");
	else
		printf("++ WORD LENGTH OF 7: FAIL\n");
	if (ft_strlen("") == 0)
		printf("-- EMPTY STRING: PASS\n");
	else
		printf("++ EMPTY STRING: FAIL\n");
}

void	test_isalnum(void)
{
	printf("--> FT_ISALNUM TEST <--\n");
	if (ft_isalnum('A') == 1
		&& ft_isalnum('a') == 1
		&& ft_isalnum('7') == 1)
		printf("-- ALPHANUMERIC CHARACTERS: PASS\n");
	else
		printf("++ ALPHANUMERIC CHARACTERS: FAIL\n");
	if (ft_isalnum('@') == 0
		&& ft_isalnum('\n') == 0)
		printf("-- NON-ALPHANUMERIC CHARACTERS: PASS\n");
	else
		printf("++ NON-ALPHANUMERIC CHARACTERS: FAIL\n");
}

void	test_memset(void)
{
	printf("--> FT_MEMSET TEST <--\n");

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
