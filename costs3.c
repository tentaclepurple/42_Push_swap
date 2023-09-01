/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:34:10 by imontero          #+#    #+#             */
/*   Updated: 2023/09/01 10:06:31 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	costs_final_balance_aux_r(t_ps *ps, int i)
{
	ps->costs[i][0] = ps->r_balan;
	ps->costs[i][4] = 0;
	ps->costs[i][5] = 0;
	ps->costs[i][6] = 0;
	ps->costs[i][7] = 0;
	ps->costs[i][8] = 0;
	ps->costs[i][9] = 0;
	ps->costs[i][10] = 0;
}

void	costs_final_balance_aux_rr(t_ps *ps, int i)
{
	ps->costs[i][0] = ps->rr_balan;
	ps->costs[i][1] = 0;
	ps->costs[i][2] = 0;
	ps->costs[i][3] = 0;
	ps->costs[i][7] = 0;
	ps->costs[i][8] = 0;
	ps->costs[i][9] = 0;
	ps->costs[i][10] = 0;
}

void	costs_final_balance_aux_r_rr(t_ps *ps, int i)
{
	ps->costs[i][0] = ps->r_rr_balan;
	ps->costs[i][1] = 0;
	ps->costs[i][2] = 0;
	ps->costs[i][3] = 0;
	ps->costs[i][4] = 0;
	ps->costs[i][5] = 0;
	ps->costs[i][6] = 0;
	ps->costs[i][9] = 0;
	ps->costs[i][10] = 0;
}

void	costs_final_balance_aux_rr_r(t_ps *ps, int i)
{
	ps->costs[i][0] = ps->rr_r_balan;
	ps->costs[i][1] = 0;
	ps->costs[i][2] = 0;
	ps->costs[i][3] = 0;
	ps->costs[i][4] = 0;
	ps->costs[i][5] = 0;
	ps->costs[i][6] = 0;
	ps->costs[i][7] = 0;
	ps->costs[i][8] = 0;
}
