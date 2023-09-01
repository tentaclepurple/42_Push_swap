/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:06:04 by imontero          #+#    #+#             */
/*   Updated: 2023/09/01 10:12:02 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	costs_optimization_rr(t_ps *ps, int i)
{
	if (ps->costs[i][2] > 0 && ps->costs[i][3] > 0)
	{
		if (ps->costs[i][2] == ps->costs[i][3])
		{
			ps->costs[i][1] = ps->costs[i][2];
			ps->costs[i][2] = 0;
			ps->costs[i][3] = 0;
		}
		else if (ps->costs[i][2] > ps->costs[i][3])
		{
			ps->costs[i][1] = ps->costs[i][3];
			ps->costs[i][2] -= ps->costs[i][3];
			ps->costs[i][3] = 0;
		}
		else if (ps->costs[i][2] < ps->costs[i][3])
		{
			ps->costs[i][1] = ps->costs[i][2];
			ps->costs[i][3] -= ps->costs[i][2];
			ps->costs[i][2] = 0;
		}
	}
}

void	costs_optimization_rrr(t_ps *ps, int i)
{
	if (ps->costs[i][5] > 0 && ps->costs[i][6] > 0)
	{
		if (ps->costs[i][5] == ps->costs[i][6])
		{
			ps->costs[i][4] = ps->costs[i][5];
			ps->costs[i][5] = 0;
			ps->costs[i][6] = 0;
		}
		else if (ps->costs[i][5] > ps->costs[i][6])
		{
			ps->costs[i][4] = ps->costs[i][6];
			ps->costs[i][5] -= ps->costs[i][6];
			ps->costs[i][6] = 0;
		}
		else if (ps->costs[i][5] < ps->costs[i][6])
		{
			ps->costs[i][4] = ps->costs[i][5];
			ps->costs[i][6] -= ps->costs[i][5];
			ps->costs[i][5] = 0;
		}
	}
}

void	reset_costs_matrix(t_ps *ps)
{
	int	i;
	
	i = 0;
	while (i < ps->totalsize)
	{
		ft_bzero(ps->costs[i], sizeof(int) * 12);
		i++;
	}	
}

/*
	    | Total |  rr ra rb | rrr rra rrb | ra rrb | rra  rb  |  pb
	    |   0   |  1  2  3  |  4   5   6  |  7  8  |  9   10  |  11
	________________________________________________________________
*/
void	costs_fill_raw(t_ps *ps, int src, int dst)
{
	ps->costs[src][2] = src;
	ps->costs[src][3] = dst;
	ps->costs[src][5] = ps->asize - src;
	ps->costs[src][6] = ps->bsize - dst;
	ps->costs[src][7] = src;
	ps->costs[src][8] = ps->bsize - dst;
	ps->costs[src][9] = ps->asize - src;
	ps->costs[src][10] = dst;
	ps->costs[src][11] = 1;
	if (src == 0)
	{
		ps->costs[src][5] = 0;
		ps->costs[src][9] = 0;
	}
	if (dst == 0)
	{
		ps->costs[src][6] = 0;
		ps->costs[src][8] = 0;
	}
}

