#include "libftprintf.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:51:00 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/19 17:40:08 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    ft_putu(unsigned int n)
{
    char *str = "0123456789";
    int count = 0;
    
    if(n > 9)
       count += ft_putu(n/10);
    count += write(1, &str[n%10], 1);
    return count;
}

