/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:51:08 by imontero          #+#    #+#             */
/*   Updated: 2023/09/06 08:31:24 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 
	Gets the target index for every element in A
	Calculate raw cost of 4 cases ra rb, rra, rrb, ra rrb, rra rb
	Fills the costs matrix:
	
	    |   0   |   1  2  3 |  4   5   6  |  7  8  |  9   10  |  11
	    | Total |  rr ra rb | rrr rra rrb | ra rrb | rra  rb  |  pb
	________________________________________________________________
		|	0	|   0  2  3	|  0   5   5  |	 2  5  |  5    3  |   1
		|	0	|   2  0  1	|  5   0   0  |	 2  5  |  5    3  |   1	
		|	5	|   0  2  3	|  0   0   0  |	 0  0  |  0    0  |   1
	...
*/
void	costs_calculus(t_ps *ps)
{
	int	src;
	int	dst;

	src = 0;
	while (src < ps->asize)
	{
		dst = find_target_index_in_b(ps->a[src], ps);
		costs_fill_raw(ps, src, dst);
		src++;
	}
	costs_optimization(ps);
}

void	costs_optimization(t_ps *ps)
{
	int	i;

	i = -1;
	while (++i < ps->asize)
	{
		costs_optimization_rr(ps, i);
		costs_optimization_rrr(ps, i);
		costs_final_balance(ps, i);
	}
}

void	costs_final_balance(t_ps *ps, int i)
{
	ps->r_balan = ps->costs[i][1] + ps->costs[i][2] + ps->costs[i][3];
	ps->rr_balan = ps->costs[i][4] + ps->costs[i][5] + ps->costs[i][6];
	ps->r_rr_balan = ps->costs[i][7] + ps->costs[i][8];
	ps->rr_r_balan = ps->costs[i][9] + ps->costs[i][10];
	if (ps->r_balan <= ps->rr_balan && ps->r_balan <= ps->r_rr_balan
		&& ps->r_balan <= ps->rr_r_balan)
		costs_final_balance_aux_r(ps, i);
	else if (ps->rr_balan <= ps->r_balan && ps->rr_balan <= ps->r_rr_balan
		&& ps->rr_balan <= ps->rr_r_balan)
		costs_final_balance_aux_rr(ps, i);
	else if (ps->r_rr_balan <= ps->r_balan && ps->r_rr_balan <= ps->rr_balan
		&& ps->r_rr_balan <= ps->rr_r_balan)
		costs_final_balance_aux_r_rr(ps, i);
	else if (ps->rr_r_balan <= ps->r_balan && ps->rr_r_balan <= ps->rr_balan
		&& ps->rr_r_balan <= ps->r_rr_balan)
		costs_final_balance_aux_rr_r(ps, i);
}	

int	get_cheapest(t_ps *ps)
{
	int	i;
	int	j;

	i = ps->asize - 2;
	j = ps->asize -1;
	while (i >= 0)
	{
		if (ps->costs[i][0] < ps->costs[j][0])
		{
			j = i;
		}
		i--;
	}
	return (j);
}
