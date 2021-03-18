/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:47:15 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 18:51:39 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "setting.h"
#include "start_program.h"

int		main(int argc, char *argv[])
{
	int error;

	error = 0;
	if (argc != 2)
		error = 1;
	else
	{
		if (!validate_input(argv[1]))
			error = 1;
		else
			error = !start_program(argv[1]);
	}
	if (error == 1)
		ft_error_msg();
	return (0);
}

int		validate_input(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (!((str[i] >= '1' && str[i] <= '4') || str[i] == ' '))
			return (0);
		else if (i % 2 == 0 && str[i] == ' ')
			return (0);
		else if (str[i] >= '1' && str[i] <= '4')
			num++;
		i++;
	}
	if (num == 16 && i == 31)
		return (1);
	else
		return (0);
}

void	ft_error_msg(void)
{
	write(1, "Error\n", 6);
}
