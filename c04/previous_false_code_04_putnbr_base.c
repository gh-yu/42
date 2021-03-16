/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 00:32:29 by gyu               #+#    #+#             */
/*   Updated: 2021/03/16 02:15:15 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_change_base(int nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		ft_change_base(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

int		validate_base(char *base)
{
	int i;
	int j;

	if (base[0] == 0)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[1] == 0)
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = 0;
	if (validate_base(base))
	{
		if (nbr < 0)
		{
			nbr = nbr * -1;
			ft_putchar('-');
		}
		while (base[base_len])
			base_len++;
		ft_change_base(nbr, base, base_len);
	}
}
