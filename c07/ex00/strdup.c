/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:50:08 by gyu               #+#    #+#             */
/*   Updated: 2021/03/18 22:44:29 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *temp;
	int src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (!(temp = (char *)malloc(sizeof(char) * src_len + 1)))
		return (0);
	int i = 0;
	while (i < src_len)
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}

int		main()
{
	char *s = "gyu";
	char *dest;

	dest = ft_strdup(s);
	printf("%s\n", dest);
	free (dest);
}
