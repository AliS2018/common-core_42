/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 16:54:04 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/12 19:09:38 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static char	str_start(char *str, char set)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = set[i];
		i++;
	}
	return (str[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*ptr;

	if (!s1 || !set)
	return (NULL);
	
	ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
}
