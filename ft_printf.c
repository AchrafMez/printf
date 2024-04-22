/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:44:13 by amezioun          #+#    #+#             */
/*   Updated: 2024/04/22 21:46:53 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	if (*format)
	{
		while (*format)
		{
			if (*format == '%')
			{
				if (*(format + 1) == '\0')
					return (count);
				count += ft_print_format(*(++format), ap);
			}
			else
				count += write(1, &*format, 1);
			format++;
		}
	}
	va_end(ap);
	return (count);
}
