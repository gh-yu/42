/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_program.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojekim <hyojekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:05:56 by hyojekim          #+#    #+#             */
/*   Updated: 2021/03/07 18:47:17 by hyojekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef START_PROGRAM_H
# define START_PROGRAM_H

# include <unistd.h>
# include "setting.h"
# include "create_solution.h"

/*
** start_program		: main function of "start_program.h"
** ft_put_conditions	: put data to struct
** ft_validate_condition: check up-down or left-right sum is valiable
** ft_condition_list_num: put list num data to struct
*/
int		start_program(char *argv);
void	ft_put_conditions(char *argv);
int		ft_validate_condition(char *argv);
int		ft_condition_list_num(int ul, int dr);

#endif
