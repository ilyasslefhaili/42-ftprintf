/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:46:08 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/16 18:28:22 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_fd(int nb, int fd)
{
	long	e;
	int	len;

	len  =  0;
	e = nb;
	if (e < 0)
	{
		write(fd, "-", 1);
		e *= -1;
	}
	if (e <= 9)
	{
		ft_putchar_fd(e + '0', fd);
		len++;
	}
	else
	{
		ft_putnbr_fd(e / 10, fd);
		ft_putnbr_fd(e % 10, fd);
	}
	return (nbrlen(nb));
}
// int main()
// {
//     int a = 464467;
//     unsigned int o = -126789;
//     //printf("%u\n",o);
//     printf("\n%d",ft_putnbr_fd(65355,1));
// }