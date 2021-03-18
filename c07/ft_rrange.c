/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 21:12:17 by gyu               #+#    #+#             */
/*   Updated: 2021/03/18 22:39:31 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int size;

	if (min >= max)
		return (NULL);	
	size = max - min + 1;
	if (!(res = (int *)malloc(sizeof(int) * size)))
		return (NULL);
	while (size--)
	{
		res[size] = min;
		min++;
	}
	res[size] = 0;
	return (res);
}

int		main(void)
{
	int *s;
	
	s = ft_range(5, 10);
	while (*s)
	{
		printf("%d ", *s);
		s++;
	}
//	free(s);
	return 0;
}
