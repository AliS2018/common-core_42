/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:14:59 by alsadyko          #+#    #+#             */
/*   Updated: 2026/09/29 18:18:12 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H
# include <unistd.h>
# include <fcntl.h>

void	ft_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);
#endif
