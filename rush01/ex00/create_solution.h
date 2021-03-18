/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_soultion.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:00:53 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 21:25:10 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_SOLUTION_H
# define CREATE_SOLUTION_H

# include <unistd.h>
# include "setting.h"

/*
** [global_variables]
** g_success 	: calc num of solutions
**			   	  print grid execute only once -> when (g_success = 0;)
** g_grid[4][4] : solution grid
*/
int g_success;
int g_grid[4][4];

/*
** solution			: main function of "ft_create_solution.h"
** ft_make_while	: recursively make while from row0 to row3 (left-right)
** ft_block_list_id : return id of g_block_list by left-right conditions
** ft_fill_grid		: fill the grid with blocks_list
*/
int		solution(void);
void	ft_make_while(int index);
int		ft_block_list_id(int ul, int dr);
void	ft_fill_grid(int index, int offset);

#endif
