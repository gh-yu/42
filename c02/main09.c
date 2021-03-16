/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gh-yu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 00:26:38 by gh-yu             #+#    #+#             */
/*   Updated: 2021/03/13 23:43:05 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_word(char *str);
char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "sAlut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *s = str;

	s = ft_strcapitalize(s);

	printf("%s\n", s);

	return 0;
}
