/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:44:13 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/25 10:04:52 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int count;

    if (write(1,0,0) == -1)
        return (-1);
    va_start(ap, format);
    count = 0;
    // if(format == NULL)
    // {
    //     count += ft_putstr("(null)");
    //     return count;
    // }
    if(*format)
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

// int main()
// {
//     int a =ft_printf("%%%s", NULL);
//     printf("%d", a);
//     // fclose(stdout);
//     // int a = printf("0x%p-", (void *)ULONG_MAX);
//     // return (a);
//     // int b = printf("0x%p-", (void *)ULONG_MAX);
//     // printf("%d\n", b);
    
//     // int i = 98797;
//     // int *a = &i;
//     // int d1 = printf("%p\n", a);
//     // int d2 = ft_printf("%p\n", a);
//     // printf("dyalhom == %d\n", d1);
//     // printf("dyali  === %d\n", d2);
// }