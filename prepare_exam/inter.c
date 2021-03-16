/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gh-yu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:56:02 by gh-yu             #+#    #+#             */
/*   Updated: 2021/03/13 01:26:01 by gh-yu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_overlap_check(char *str, char cur_i, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == cur_i)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	while (argv[1][i])
	{
			
		while (argv[2][j])
		{
			if ((argv[1][i] == argv[2][j]) && (ft_overlap_check(argv[1], argv[1][i], i) == 1))
			{
				write(1, &argv[1][i], 1);
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
