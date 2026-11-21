/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:48:03 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/20 21:16:16 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif 

/* get_next_line_bonus.c */
char		*get_next_line(int fd);

/* get_next_line_utils_bonus.c */

char		*nextline_strchr(const char *s, int c);
char		*nextline_substr(char const *s, unsigned int start, size_t len);
char		*nextline_strjoin(char *s1, char const *s2);
size_t		nextline_strlen(const char *s);

#endif
