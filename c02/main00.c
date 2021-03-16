/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:22:36 by gyu               #+#    #+#             */
/*   Updated: 2021/03/14 19:43:05 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char str1[] = "gyu isname ";
	char str2[50];
	char *dest = str2;

	dest = (char *)ft_strcpy(dest, str1);
	printf("%s\n", dest);
	printf("%s\n", strcpy(str2, str1));
	//printf("%s\n", ft_strcpy(str2, str1)); 
	//like this, we can put the retrun value of funtion(string(return value) is match with %s) 
	//printf("%s\n%s\n", str1, str2);
}
