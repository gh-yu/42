/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:12:53 by gyu               #+#    #+#             */
/*   Updated: 2021/03/16 00:18:24 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_minus(int sign)
{
	if (sign > 1 && sign % 2 == 0)
	{
		return (-1);
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int sign;
	int result;
	
	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
			str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign ++;
		}
		str++; 
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	sign = is_minus(sign);
	return (result * sign);	
}
