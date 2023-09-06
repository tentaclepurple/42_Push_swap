/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:50:33 by imontero          #+#    #+#             */
/*   Updated: 2023/09/04 18:01:23 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_ps *ps)
{
	if (ps->asize == 4)
		sort_five_move_min(ps);
	else if (ps->asize == 5)
	{
		sort_five_move_2min(ps);
		sort_five_move_min(ps);
	}
	sort_three(ps, 1);
	while (ps->bsize > 0)
	{
		if (ps->b[0] < ps->b[1] && ps->bsize > 1)
			sb(ps, 1);
		pa(ps, 1);
	}
}

void	find_second_min_a(t_ps *ps)
{
	int	i;

	i = 0;
	ps->a2min = INT_MAX;
	while (i < ps->asize)
	{
		if (ps->a[i] < ps->a2min && ps->a[i] != ps->amin)
		{
			ps->a2min = ps->a[i];
			ps->a2minidx = i;
		}
		i++;
	}
}

void	sort_five_move_min(t_ps *ps)
{
	find_max_min_a(ps);
	{
		if (ps->aminidx < (ps->asize / 2))
		{
			while (ps->aminidx > 0)
			{
				ra(ps, 1);
				ps->aminidx--;
			}
		}
		else
		{	
			while (ps->aminidx < ps->asize)
			{
				rra(ps, 1);
				ps->aminidx++;
			}
		}
		pb(ps, 1);
	}
}

void	sort_five_move_2min(t_ps *ps)
{
	find_second_min_a(ps);
	if (ps->a2minidx < (ps->asize / 2))
	{
		while (ps->a2minidx > 0)
		{
			ra(ps, 1);
			ps->a2minidx--;
		}
	}
	else
	{	
		while (ps->a2minidx < ps->asize)
		{
			rra(ps, 1);
			ps->a2minidx++;
		}
	}
	pb(ps, 1);
}
