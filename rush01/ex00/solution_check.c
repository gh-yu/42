/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:34:05 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 18:48:10 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solution_check.h"

int		grid_check(void)
{
	int view;
	int max;

	view = 0;
	max = 0;
	if (ft_check_overlap() && ft_check_up(view, max) &&
			ft_check_down(view, max))
		return (1);
	return (0);
}

int		ft_check_overlap(void)
{
	int row;
	int col;
	int i;

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 3)
		{
			i = row + 1;
			while (i < 4)
			{
				if (g_grid[row][col] == g_grid[i][col])
					return (0);
				i++;
			}
			row++;
		}
		col++;
	}
	return (1);
}

int		ft_check_up(int view, int max)
{
	int row;
	int col;

	col = -1;
	while (++col < 4)
	{
		view = 1;
		max = g_grid[0][col];
		row = -1;
		while (++row < 3)
		{
			if (g_grid[row][col] < g_grid[row + 1][col])
			{
				if (max < g_grid[row + 1][col])
				{
					max = g_grid[row + 1][col];
					view++;
				}
			}
		}
		if (view != g_conditions[col].ul)
			return (0);
	}
	return (1);
}

int		ft_check_down(int view, int max)
{
	int row;
	int col;

	col = -1;
	while (++col < 4)
	{
		view = 1;
		max = g_grid[3][col];
		row = 4;
		while (--row > 0)
		{
			if (g_grid[row][col] < g_grid[row - 1][col])
			{
				if (max < g_grid[row - 1][col])
				{
					max = g_grid[row - 1][col];
					view++;
				}
			}
		}
		if (view != g_conditions[col].dr)
			return (0);
	}
	return (1);
}

void	ft_print_grid(void)
{
	char	num;
	int		i;
	int		j;

	if (g_success != 0)
		return ;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			num = g_grid[i][j] + '0';
			write(1, &num, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	g_success++;
}
