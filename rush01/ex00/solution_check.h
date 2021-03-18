/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_check.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:32:13 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 18:47:56 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLUTION_CHECK_H
# define SOLUTION_CHECK_H

# include <unistd.h>
# include "setting.h"
# include "create_solution.h"

/*
** grid_check		: main function of "ft_solution_check.h"
** ft_check_overlap	: check overlap between rows
** ft_check_up		: check view number from up-side
** ft_check_down	: check view number from down-side
** ft_print_grid	: print solution grid
*/
int		grid_check(void);
int		ft_check_overlap(void);
int		ft_check_up(int view, int max);
int		ft_check_down(int view, int max);
void	ft_print_grid(void);

#endif
