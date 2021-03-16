/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:54:34 by gyu               #+#    #+#             */
/*   Updated: 2021/03/16 21:36:21 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int value;
	int result;

	if (nb == 0)
		return (1);
	i = 0;
	value = 1;
	result = 1;
	while (i < nb)
	{
		value = nb - i;
		result = result * value;
		if (nb - i == 1)
			return (result);
		i++;
	}
	return (0);
}
