/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:24:00 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/10 21:21:00 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define ERR "\x1b[31m"
#define DEBUG "\x1b[33m"
#define PASS "\x1b[34m"
#define RESET "\033[m"
#include "libft.h"
void	vd(void)
{
	usleep(500000);
	printf("\n");
}
/*void	test_memmove(void)
{
	
}*/

void	test_isascii(void)
{
	int i = 0;
	i = 0;
	while (i < 127)
	{
		printf("FUNC RETURN:%s %d %s| OUTPUT: %s %c %s  >>>>>>>>>>>>>>  %s (PASS)\n%s",DEBUG, ft_isascii(i), RESET, PASS, i, RESET, PASS, RESET);
		usleep(50000);
		i++;
	}
}
void	test_isalpha(void)
{
	printf("--> FT_ISALPHA TEST <--\n");
	if (ft_isalpha('A') == 1
		&& ft_isalpha('Z') == 1
		&& ft_isalpha('a') == 1
		&& ft_isalpha('z') == 1)
		printf("-- ALPHABET BOUNDS:%s PASS%s\n", PASS, RESET);
	else
		printf("++ ALPHABET BOUNDS:%s FAIL %s\n",ERR, RESET);

	if (ft_isalpha('7') == 0 && ft_isalpha('@') == 0)
		printf("-- NON-ALPHABETIC PRINTABLES: PASS\n");
	else
		printf("++ NON-ALPHABETIC PRINTABLES: FAIL\n");

	if (ft_isalpha('\t') == 0 && ft_isalpha('\n') == 0)
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

void	test_isprint(void)
{
	printf("--> FT_ISPRINT TEST <--\n");
	if (ft_isprint('A') == 1
		&& ft_isprint('a') == 1
		&& ft_isprint('@') == 1)
		printf("-- CHARACTER IS PRINTABLE: PASS\n");
	else
		printf("++ CHARACTER IS PRINTABLE: FAIL\n");
	if (ft_isprint('\t') == 0
			&& ft_isprint('\n') == 0
			&& ft_isprint('\b') == 0)
		printf("-- CHARACTER IS NON PRINTABLE: PASS\n");
	else
		printf("++ CHARACTER IS NON PRINTABLE: FAIL\n");
}

void	test_isdigit(void)
{
	printf("--> FT_ISDIGIT TEST <--\n");
	if (ft_isdigit('0') == 1
		&& ft_isdigit('5') == 1
		&& ft_isdigit('9') == 1)
		printf("-- CHARACTER IS DIGIT: PASS\n");
	else
		printf("++ CHARACTER IS DIGIT: FAIL\n");
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

void	test_strlcat(void)
{
	char	a[20] = "HOLA";
	char	b[20] = "HOLA";
	char	*src = "ADIOS";

	printf("ft:   %zu \"%s\"\n", ft_strlcat(a, src, 8), a);
	printf("real: %zu \"%s\"\n", strlcat(b, src, 8), b);
}
int	main(void)
{
	test_isalpha();
	vd();
	test_isprint();
	vd();
	test_isdigit();
	vd();
	test_isalnum();
	vd();
	test_isascii();
	vd();
	test_strlen();
	vd();
	test_memset();
	vd();
	test_strlcat();
	vd();
	return (0);
}
