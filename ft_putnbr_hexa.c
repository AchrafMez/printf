/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:19:05 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/25 10:19:06 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long n, char specifier)
{
	int		count;
	char	*str;

	count = 0;
	str = "0123456789abcdef";
	if (specifier == 'X')
		str = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_putnbr_hexa((n / 16), specifier);
	count += write(1, &str[n % 16], 1);
	return (count);
}
