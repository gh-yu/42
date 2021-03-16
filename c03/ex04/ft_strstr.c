/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:53:32 by gyu               #+#    #+#             */
/*   Updated: 2021/03/15 17:58:01 by gyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p1;
	char *p2;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			p1 = str + 1;
			p2 = to_find + 1;
			while (*p1 && *p1 == *p2)
			{
				p1++;
				p2++;
			}
			if (*p2 == 0)
				return (str);
			if (*p1 == 0)
				break ;
		}
		str++;
	}
	return (0);
}
