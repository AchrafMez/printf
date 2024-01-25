/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:51:00 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/25 09:35:43 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putnbr(int n)
{
    char *str = "0123456789";
    long a;
    a = n;
    int count = 0;
    
    if(a < 0)
    {
        count += write(1, "-", 1);   
        a = -a;
    }
    if(a > 9)
       count += ft_putnbr(a/10);
    count += write(1, &str[a%10], 1);
    return count;
}
