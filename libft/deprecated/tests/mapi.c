/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:13:20 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/15 20:13:30 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	to_upper_all(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static void	test(char const *s, char (*f)(unsigned int, char))
{
	char	*res;

	res = ft_strmapi(s, f);
	if (!res)
	{
		printf("\"%s\" -> NULL\n", s ? s : "(null)");
		return ;
	}
	printf("\"%s\" -> [%s]\n", s, res);
	free(res);
}

int	main(void)
{
	test("abc", to_upper_all);
	test("hello world", to_upper_all);
	test("abcdef", to_upper_even);
	test("", to_upper_all);
	test(NULL, to_upper_all);
	test("abc", NULL);
	return (0);
}
