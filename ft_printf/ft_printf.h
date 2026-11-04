/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:11:13 by alsadyko          #+#    #+#             */
/*   Updated: 2026/11/04 19:51:56 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int				ft_printf(const char *format, ...);
int				ft_printf_menu(int c, va_list *args);
int				ft_printf_char(int c);
int				ft_printf_str(char *str);
int				ft_printf_int(int decimal);
int				ft_printf_uint(unsigned long n, int mode);
int				ft_printf_ptr_addr(void *ptr);
/*UTILS*/
void			ft_putchar(int c);
size_t			ft_strlen(const char *s);

#endif
