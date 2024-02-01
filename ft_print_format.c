/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:19:15 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/25 10:19:16 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int ft_print_format(char specifier, va_list ap)
{
    int count;

    count = 0;
    if(specifier == 'c')
        count = count + ft_putchar(va_arg(ap, int));
    else if(specifier == 's')
        count = count + ft_putstr(va_arg(ap, char *));
    else if(specifier == 'd' || specifier == 'i')
        count += ft_putnbr(va_arg(ap, int));
    else if(specifier == 'u')
        count += ft_putnbr(va_arg(ap, long int));
    else if (specifier == 'p')
        {
            count = 2;
            ft_putstr("0x");
            count += ft_putnbr_hexa(va_arg(ap, unsigned long), specifier);
        } 
    else if(specifier == 'x' || specifier == 'X')
        count += ft_putnbr_hexa(va_arg(ap, unsigned int), specifier);
    else
        count += ft_putchar(specifier);
    return count;
}
