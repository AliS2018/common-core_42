/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 00:14:34 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/14 00:21:00 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static void	test(char const *s, char c)
{
	char	**res;
	size_t	i;
	printf("input: \"%s\" delim: '%c'\n", s ,c);
	res = ft_split(s,c);
	if (!res)
	{
		printf("	NULL\n\n");
		return ;
	}
	i = 0;
	while (res[i])
	{
		printf(" [%zu] [%s] \n", i, res[i]);
		free(res[i]);
		i++;
	}
	printf(" words: %zu\n\n", i);
	free(res);
}

int	main(void)
{
	test("a,,bc", ',');
	test(",,,", ',');
	test("", ',');
	test("abc", ',');
	test("  hello  world  ", ' ');
	test("a,b,c", ',');
	return (0);	
}
