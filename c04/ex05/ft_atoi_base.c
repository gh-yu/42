/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 02:24:47 by gyu               #+#    #+#             */
/*   Updated: 2021/03/16 17:43:16 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		else if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
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

int		ft_find_base(char c, char *base, int base_len)
{
	int i;

	i = 0;
	while (i < base_len)
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int base_len;
	int sign;
	int result;
	int index;

	base_len = 0;
	if (!(validate_base(base)))
		return (0);
	while (base[base_len])
		base_len++;
	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (*str)
	{
		index = ft_find_base(*(str++), base, base_len);
		if (index == -1)
			break ;
		result = (result * base_len) + (sign * index);
	}
	return (result);
}
