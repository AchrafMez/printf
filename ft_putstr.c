/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <amezioun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:19:02 by amezioun          #+#    #+#             */
/*   Updated: 2024/01/25 10:19:03 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int count = 0;
    if(str == NULL)
        str = "(null)";
    while (*str != '\0')
    {
        count = count + write(1, &*str, 1);
        str++;
    }
    return count;
}