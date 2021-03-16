/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyu <gyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:03:12 by gyu               #+#    #+#             */
/*   Updated: 2021/02/21 17:51:18 by seshim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);
char			rec_check(int x, int y, int cur_x, int cur_y);

void			rush(int x, int y)
{
	int		cur_x;
	int		cur_y;

	cur_y = 0;
	while (cur_y < y)
	{
		cur_x = 0;
		while (cur_x < x)
		{
			ft_putchar(rec_check(x, y, cur_x, cur_y));
			cur_x++;
		}
		ft_putchar('\n');
		cur_y++;
	}
}

char			rec_check(int x, int y, int cur_x, int cur_y)
{
	if (cur_y == 0)
	{
		if (cur_x == 0)
			return ('/');
		else if (cur_x == x - 1)
			return ('\\');
		else
			return ('*');
	}
	else if (cur_y == y - 1)
	{
		if (cur_x == 0)
			return ('\\');
		else if (cur_x == x - 1)
			return ('/');
		else
			return ('*');
	}
	else
	{
		if (cur_x == 0 || cur_x == x - 1)
			return ('*');
		else
			return (' ');
	}
}
