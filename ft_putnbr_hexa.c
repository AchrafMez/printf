#include "libftprintf.h"

int    ft_putnbr_hexa(unsigned long n, char specifier)
{
    int count = 0;
    char *str = "0123456789abcdef";
    if(specifier == 'X')
        str = "0123456789ABCDEF";
    if(n >= 16)
       count +=  ft_putnbr_hexa((n/ 16), specifier);
    count += write(1, &str[n%16], 1);
    return count;
}

