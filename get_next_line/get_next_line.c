/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:25:19 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/10 21:36:56 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	counter(void)
{
	static int i = 0;
	return (i++);

}
/*
char	*get_next_line(int fd)
{

}*/
int main(void)
{
	printf("%d", counter());
	printf("%d", counter());
	printf("%d", counter());
	printf("%d", counter());
	printf("%d", counter());
	printf("%d", counter());



}
