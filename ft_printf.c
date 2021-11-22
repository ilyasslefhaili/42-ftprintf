/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:54:53 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/20 19:54:57 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list arg;
    int i;
    int a;

    a = 0;
    i = 0;    
    va_start(arg, str);
    while(str[i])
    {
        if(str[i] == '%')
        {
            a = a + checktype(str[i + 1],arg);
            i++;
        }
        else
        {
            write(1, &str[i],1);
            a++;
        }
        i++;
    }
    va_end(arg);
    return (a);
    

}
