/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 20:46:17 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/09 20:49:44 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	ptr_str_len;
	size_t	mod_str_len;

	if (s == NULL)
		return (NULL);
	ptr_str_len = ft_strlen(s);
	if (start >= ptr_str_len)
		return (ft_strdup(""));
	mod_str_len = ptr_str_len - start;
	if (mod_str_len > len)
		mod_str_len = len;
	ptr = malloc(mod_str_len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < mod_str_len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*ptr;

	ptr  = "SUPERCALIFRAGILISTICEXPIALIDOCIOUS";

	printf("%s\n", ft_substr(ptr, 5, 15));
}*/
