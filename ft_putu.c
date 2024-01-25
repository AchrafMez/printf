/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:51:00 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/25 09:36:06 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putu(unsigned int n)
{
    char *str = "0123456789";
    int count = 0;
    
    if(n > 9)
       count += ft_putu(n/10);
    count += write(1, &str[n%10], 1);
    return count;
}

