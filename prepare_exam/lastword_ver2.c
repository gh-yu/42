/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword_ver2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gh-yu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 02:26:55 by gh-yu             #+#    #+#             */
/*   Updated: 2021/03/19 02:57:14 by gh-yu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i = 0;
	int	last_index = 0;
	int store_index = 0;

	if (argc == 2)
	{	
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' && argv[1][i] == '\t')
				last_index = 1;
			else
			{
				if (last_index == 1)
					store_index = i;
				last_index = 0;
			}
		    i++;
		}
	}
	while (argv[1][store_index] && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][store_index++], 1);
	}
	write(1, "\n", 1);
	return (0);	
}
