/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:49:23 by byahn             #+#    #+#             */
/*   Updated: 2021/03/13 20:40:58 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		strlen_until_line(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*file_to_str(char *filename, int *line_count)
{
	char	*str;
	int		i;
	int		fd;
	char	buf;

	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error();
		return (0);
	}
	while (0 < read(fd, &buf, 1))
		i++;
	str = (char *)malloc(sizeof(char) * i);
	i = 0;
	fd = open(filename, O_RDONLY);
	while (0 < read(fd, &buf, 1))
	{
		if (buf == '\n')
			(*line_count)++;
		str[i] = buf;
		i++;
	}
	close(fd);
	return (str);
}
void	str_to_dict(char *str, t_dict *dict)
{
	int		i;
	char	*tmp;

}

int		main(int argc, char *argv[])
{
	char	*str;
	t_dict	*dict;
	int		line_count;

	line_count = 0;
	str = file_to_str("./numbers.dict", &line_count);
	dict = (t_dict *)malloc(sizeof(t_dict) * line_count);
	ft_putstr(str);
	return (0);
}
