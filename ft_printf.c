/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:44:13 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/19 15:48:37 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int count;

    va_start(ap, format);
    count = 0;
    if(format == NULL)
    {
        ft_putstr("(null)");
        return count;
    }
    else if(*format)
    {
        while (*format)
        {
            if(*format == '%')
                count += ft_print_format(*(++format), ap);   
            else
                count += write(1, &*format, 1);
            format++;
        }
    }
    va_end(ap);
    return count;
}

int main()
{
    int a = 15;
    int *d = &a;
    int j = ft_printf("%p", d);
    ft_printf(" sizeis %d", j);
}