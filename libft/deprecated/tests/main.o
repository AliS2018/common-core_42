/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 22:22:48 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/03 04:45:05 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

#define ERR		"\x1b[31m"
#define DEBUG	"\x1b[33m"
#define PASS	"\x1b[34m"
#define RESET	"\x1b[0m"

static void	delay(void)
{
	usleep(300000);
	printf("\n");
}

static void	section(const char *name)
{
	printf("%s--> %s TEST <--%s\n", DEBUG, name, RESET);
}

static void	result(const char *name, int condition)
{
	if (condition)
		printf("-- %-35s %sPASS%s\n", name, PASS, RESET);
	else
		printf("++ %-35s %sFAIL%s\n", name, ERR, RESET);
}

void	test_isalpha(void)
{
	section("FT_ISALPHA");
	result("alphabet bounds",
		ft_isalpha('A') == 1
		&& ft_isalpha('Z') == 1
		&& ft_isalpha('a') == 1
		&& ft_isalpha('z') == 1);
	result("non-alphabetic printables",
		ft_isalpha('7') == 0
		&& ft_isalpha('@') == 0);
	result("non-printable characters",
		ft_isalpha('\t') == 0
		&& ft_isalpha('\n') == 0);
}

void	test_isalnum(void)
{
	section("FT_ISALNUM");
	result("valid alphanumeric characters",
		ft_isalnum('A') == 1
		&& ft_isalnum('a') == 1
		&& ft_isalnum('7') == 1);
	result("non-alphanumeric characters",
		ft_isalnum('@') == 0
		&& ft_isalnum('\n') == 0);
}

void	test_isdigit(void)
{
	section("FT_ISDIGIT");
	result("digit bounds",
		ft_isdigit('0') == 1
		&& ft_isdigit('5') == 1
		&& ft_isdigit('9') == 1);
	result("non-digits",
		ft_isdigit('/') == 0
		&& ft_isdigit(':') == 0
		&& ft_isdigit('A') == 0);
}

void	test_isprint(void)
{
	section("FT_ISPRINT");
	result("printable characters",
		ft_isprint(' ') == 1
		&& ft_isprint('A') == 1
		&& ft_isprint('@') == 1
		&& ft_isprint('~') == 1);
	result("non-printable characters",
		ft_isprint('\t') == 0
		&& ft_isprint('\n') == 0
		&& ft_isprint('\b') == 0
		&& ft_isprint(127) == 0);
}

void	test_isascii(void)
{
	int	i;
	int	ok;

	section("FT_ISASCII");
	i = 0;
	ok = 1;
	while (i <= 127)
	{
		if (ft_isascii(i) == 0)
			ok = 0;
		i++;
	}
	result("ASCII range 0-127", ok);
	result("values outside ASCII",
		ft_isascii(-1) == 0
		&& ft_isascii(128) == 0
		&& ft_isascii(255) == 0);
}

void	test_strlen(void)
{
	section("FT_STRLEN");
	result("\"welcome\" length == 7",
		ft_strlen("welcome") == 7);
	result("empty string length == 0",
		ft_strlen("") == 0);
	result("single character length == 1",
		ft_strlen("A") == 1);
}

void	test_memset(void)
{
	char	buf[5];
	size_t	i;
	int		bytes_ok;

	section("FT_MEMSET");
	ft_memset(buf, 'Z', sizeof(buf));
	i = 0;
	bytes_ok = 1;
	while (i < sizeof(buf))
	{
		if (buf[i] != 'Z')
			bytes_ok = 0;
		i++;
	}
	result("all requested bytes modified", bytes_ok);
	result("returns original pointer",
		ft_memset(buf, 'Z', sizeof(buf)) == buf);
}

int	main(void)
{
	test_isalpha();
	delay();
	test_isprint();
	delay();
	test_isdigit();
	delay();
	test_isalnum();
	delay();
	test_isascii();
	delay();
	test_strlen();
	delay();
	test_memset();
	delay();
	return (0);
}
