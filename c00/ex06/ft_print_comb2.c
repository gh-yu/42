/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 02:48:35 by gyu               #+#    #+#             */
/*   Updated: 2021/03/11 04:32:48 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int comb1;
	int comb2;

	comb1 = 0;
	while (comb1 < 99)
	{
		comb2 = comb1 + 1;
		while (comb2 < 100)
		{
			ft_putchar(comb1 / 10 + '0');
			ft_putchar(comb1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(comb2 / 10 + '0');
			ft_putchar(comb2 % 10 + '0');
			if (!(comb1 == 98 && comb2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			comb2++;
		}
		comb1++;
	}
}
