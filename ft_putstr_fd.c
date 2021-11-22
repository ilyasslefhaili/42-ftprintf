/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:35:52 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/16 18:30:01 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
 static void putstr_fd(char *s, int fd)
 {
	int i;

	i = 0;
	 while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
 }
int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
	{
		putstr_fd("(null)",fd);
		return (6);
	}
	else
		putstr_fd(s, fd);
	return (ft_strlen(s));
}
