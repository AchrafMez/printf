#include "libftprintf.h"
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
        count += ft_putu(va_arg(ap, unsigned int));
    else if (specifier == 'p')
        {
            ft_putstr("0x");
            count = 2;
            count += ft_putnbr_hexa(va_arg(ap, unsigned int), specifier);
            printf("%d count is", count);
        } 
    else if(specifier == 'x' || specifier == 'X')
        count += ft_putnbr_hexa(va_arg(ap, unsigned int), specifier);
    else
        count += ft_putchar(specifier);
    return count;
}