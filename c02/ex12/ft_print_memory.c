/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 03:02:20 by gyu               #+#    #+#             */
/*   Updated: 2021/03/15 13:20:39 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);

void	ft_change_hex(char c)
{
	char *base;

	base = "0123456789abcdef";

	if (c > 15)
	{
		ft_change_hex(base[c / 16];
		ft_change_hex(base[c % 16];
	}
	else
		ft_putchar(base[c]);
}

void	*ft_print_memory(void *addr, unsigned int size)
