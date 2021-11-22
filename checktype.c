/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:55:19 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/20 19:55:20 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int checktype(char param, va_list lst)
{
    int c;

    c = 0;
    if (param == '%')
        c = ft_putchar_fd(param, 1);
    else if (param == 'd' || param == 'i')
        c = ft_putnbr_fd(va_arg(lst, int),1);
    else if (param == 's')
        c = ft_putstr_fd(va_arg(lst, char *),1);
    else if (param == 'c')
        c = ft_putchar_fd(va_arg(lst, int),1);
    else if (param == 'u')
        c = ft_putunsnb(va_arg(lst ,unsigned int),1);
    else if (param == 'x')
        c = ft_convert_hexa(va_arg(lst ,int));
    else if (param == 'p')
        c = ft_print_adress(va_arg(lst, size_t));
    else if(param == 'X')
        c = ft_convert_ghexa(va_arg(lst,int));
    return (c);   
}
