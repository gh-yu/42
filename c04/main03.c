/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:12:53 by gyu               #+#    #+#             */
/*   Updated: 2021/03/16 00:07:20 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_minus(int sign);
int		ft_atoi(char *str);

int		main(void)
{
	char s[] = " \t\n  ---+121 -a33";
	int num;

	num = ft_atoi(s);
	printf("my_atoi = %d\n", num);
//	printf("real_atoi = %d\n", atoi(s));
	return 0;
}
