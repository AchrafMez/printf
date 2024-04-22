/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:39:41 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/27 16:41:47 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(char specifier, va_list ap);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr_hexa(unsigned long n, char specifier);
int	ft_putnbr(long n);

#endif