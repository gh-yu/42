/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:22:12 by gyu               #+#    #+#             */
/*   Updated: 2021/03/17 19:07:14 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i = i + 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!(ft_is_prime(i)))
	{
		i++;
	}
	return (i);
}
