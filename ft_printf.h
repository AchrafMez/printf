#ifndef LIBFTPRINTF
#define LIBFTPRINTF
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int ft_printf(const char *format, ...);
int ft_print_format(char specifier, va_list ap);
int ft_putchar(int c);
int ft_putstr(char *str);
int    ft_putnbr_hexa(unsigned long n, char specifier);
int    ft_putnbr(long n);

#endif