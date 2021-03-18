/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_soultion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:20:15 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 18:47:02 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_solution.h"
#include "solution_check.h"

int		solution(void)
{
	int index;

	index = 0;
	g_success = 0;
	ft_make_while(index);
	if (g_success)
		return (1);
	return (0);
}

void	ft_make_while(int index)
{
	int offset;

	offset = 0;
	if (index == 3)
	{
		while (offset < g_conditions[index + 4].list_num)
		{
			ft_fill_grid(index, offset);
			if (grid_check())
				ft_print_grid();
			offset++;
		}
	}
	else
	{
		while (offset < g_conditions[index + 4].list_num)
		{
			ft_fill_grid(index, offset);
			ft_make_while(index + 1);
			offset++;
		}
	}
}

void	ft_fill_grid(int index, int offset)
{
	int c;

	c = 0;
	while (c < 4)
	{
		g_grid[index][c] = g_block_list[ft_block_list_id(
				g_conditions[index + 4].ul,
				g_conditions[index + 4].dr) + offset][c];
		c++;
	}
}

int		ft_block_list_id(int ul, int dr)
{
	if (ul == 4 && dr == 1)
		return (0);
	if (ul == 1 && dr == 4)
		return (1);
	if (ul == 3 && dr == 1)
		return (2);
	if (ul == 1 && dr == 3)
		return (5);
	if (ul == 2 && dr == 1)
		return (8);
	if (ul == 1 && dr == 2)
		return (10);
	if (ul == 2 && dr == 2)
		return (12);
	if (ul == 3 && dr == 2)
		return (18);
	if (ul == 2 && dr == 3)
		return (21);
	return (0);
}
