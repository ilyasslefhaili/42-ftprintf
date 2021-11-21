/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_connvert_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:20:09 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/21 17:20:12 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int     ft_convert_hexa(unsigned int nb)
{
	static int e;
    char *hexa;

	hexa = "0123456789abcdef";
    if (nb < 16)
    {
        e++;
		ft_putchar_fd(hexa[nb],1);
    }
	else
	{
		ft_convert_hexa(nb / 16);
		ft_convert_hexa(nb % 16);
	}
	return (e);
}
