/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 01:15:56 by gyu               #+#    #+#             */
/*   Updated: 2021/03/16 18:00:03 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_hex(unsigned char c)
{
	c += '0';
	if (c > '9')
		c += 39;
	write(1, &c, 1);
}

void	ft_change_hex(unsigned char c)
{
	ft_putchar_hex(c / 16);
	ft_putchar_hex(c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_change_hex((unsigned char)str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
