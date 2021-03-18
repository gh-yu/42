/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:14:04 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 21:33:46 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SETTING_H
# define SETTING_H

/*
** s_condition : struct of conditions
**				 ul 		= up or left
**				 dr 		= down or right
**				 list_num 	= number of possible case with condition(ul, dr)
*/
typedef struct	s_condition
{
	int			ul;
	int			dr;
	int			list_num;
}				t_condition;

/*
** [global variables]
** g_conditions[8]		: up-down 1 to 4, left-right 1 to 4
** g_block_list[24][4]	: total case of 4block list
**						  this variable is declared in "start_program.c"
*/
t_condition		g_conditions[8];
extern int		g_block_list[24][4];

/*
** validate_input	: validation of command input
** ft_error_msg		: put error message using write function
*/
int				validate_input(char *str);
void			ft_error_msg(void);

#endif
