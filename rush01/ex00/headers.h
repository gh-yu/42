/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:50:21 by byahn             #+#    #+#             */
/*   Updated: 2021/03/13 20:30:29 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_dict
{
	char	*key;
	char	*value;
}				t_dict;

#endif
