/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:50:33 by imontero          #+#    #+#             */
/*   Updated: 2023/09/02 12:20:38 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_cheapest_aux(t_ps *ps, int ch)
{
	if (ps->costs[ch][1] > 0)
	{
		while (ps->costs[ch][1] > 0)
		{
			rr(ps, 1);
			ps->costs[ch][1]--;
		}
	}
	if (ps->costs[ch][2] > 0)
	{
		while (ps->costs[ch][2] > 0)
		{
			ra(ps, 1);
			ps->costs[ch][2]--;
		}
	}
	if (ps->costs[ch][3] > 0)
	{
		while (ps->costs[ch][3] > 0)
		{
			rb(ps, 1);
			ps->costs[ch][3]--;
		}
	}
}

void	move_cheapest_aux2(t_ps *ps, int ch)
{
	if (ps->costs[ch][4] > 0)
	{
		while (ps->costs[ch][4] > 0)
		{
			rrr(ps, 1);
			ps->costs[ch][4]--;
		}
	}
	if (ps->costs[ch][5] > 0)
	{
		while (ps->costs[ch][5] > 0)
		{
			rra(ps, 1);
			ps->costs[ch][5]--;
		}
	}
	if (ps->costs[ch][6] > 0)
	{
		while (ps->costs[ch][6] > 0)
		{
			rrb(ps, 1);
			ps->costs[ch][6]--;
		}
	}
}

void	move_cheapest_aux3(t_ps *ps, int ch)
{
	if (ps->costs[ch][7] > 0)
	{
		while (ps->costs[ch][7] > 0)
		{
			ra(ps, 1);
			ps->costs[ch][7]--;
		}
	}
	if (ps->costs[ch][8] > 0)
	{
		while (ps->costs[ch][8] > 0)
		{
			rrb(ps, 1);
			ps->costs[ch][8]--;
		}
	}
	if (ps->costs[ch][9] > 0)
	{
		while (ps->costs[ch][9] > 0)
		{
			rra(ps, 1);
			ps->costs[ch][9]--;
		}
	}
}

void	final_order_b(t_ps *ps)
{
	find_max_min_b(ps);
	while (ps->bmaxidx != 0)
	{
		if (ps->bmaxidx < (ps->bsize / 2))
			rb(ps, 1);
		else
			rrb(ps, 1);
		find_max_min_b(ps);
	}
}

void	return_to_a(t_ps *ps)
{
	while (ps->bsize > 0)
		pa(ps, 1);
}
