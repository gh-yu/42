/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_program.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:13:39 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 18:47:32 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "start_program.h"

int		g_block_list[24][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {1, 3, 2, 4},
	{2, 1, 3, 4}, {2, 3, 1, 4}, {4, 1, 3, 2}, {4, 2, 3, 1}, {4, 3, 1, 2},
	{3, 1, 2, 4}, {3, 2, 1, 4}, {4, 1, 2, 3}, {4, 2, 1, 3}, {1, 4, 2, 3},
	{2, 1, 4, 3}, {2, 4, 1, 3}, {3, 1, 4, 2}, {3, 2, 4, 1}, {3, 4, 1, 2},
	{1, 2, 4, 3}, {1, 3, 4, 2}, {2, 3, 4, 1}, {1, 4, 3, 2}, {2, 4, 3, 1},
	{3, 4, 2, 1}};

int		start_program(char *argv)
{
	int i;

	i = 0;
	if (!ft_validate_condition(argv))
		return (0);
	else
	{
		while (i < 8)
		{
			g_conditions[i].list_num =
				ft_condition_list_num(g_conditions[i].ul, g_conditions[i].dr);
			i++;
		}
		if (!solution())
			return (0);
	}
	return (1);
}

int		ft_validate_condition(char *argv)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	ft_put_conditions(argv);
	while (i < 8)
	{
		sum = g_conditions[i].ul + g_conditions[i].dr;
		if (sum < 3 || sum > 5)
			return (0);
		i++;
	}
	return (1);
}

void	ft_put_conditions(char *argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] >= '1' && argv[i] <= '4')
		{
			if (i >= 0 && i <= 6)
				g_conditions[j].ul = argv[i] - '0';
			if (i >= 16 && i <= 22)
				g_conditions[j + 4].ul = argv[i] - '0';
			if (i >= 8 && i <= 14)
				g_conditions[j].dr = argv[i] - '0';
			if (i >= 24 && i <= 30)
				g_conditions[j + 4].dr = argv[i] - '0';
			if (j == 3)
				j = 0;
			else
				j++;
		}
		i++;
	}
}

int		ft_condition_list_num(int ul, int dr)
{
	if (ul == 4 && dr == 1)
		return (1);
	if (ul == 1 && dr == 4)
		return (1);
	if (ul == 3 && dr == 1)
		return (3);
	if (ul == 1 && dr == 3)
		return (3);
	if (ul == 2 && dr == 1)
		return (2);
	if (ul == 1 && dr == 2)
		return (2);
	if (ul == 2 && dr == 2)
		return (6);
	if (ul == 3 && dr == 2)
		return (3);
	if (ul == 2 && dr == 3)
		return (3);
	return (0);
}
