/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:52:34 by imontero          #+#    #+#             */
/*   Updated: 2023/09/05 11:24:32 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 	
	flag 1 pints the move
	flag 0 doesn´t
*/
void	ss(t_ps *ps, int flag)
{
	if (ps->asize <= 1 || ps->bsize <= 1)
		error("KO", ps);
	sa(ps, 0);
	sb(ps, 0);
	if (flag)
	{
		ft_printf("ss\n");
		ps->count++;
	}
}

/* 	
	flag 1 pints the move
	flag 0 doesn´t
*/
void	rr(t_ps *ps, int flag)
{
	if (ps->asize < 2 || ps->bsize < 2)
		error("KO", ps);
	ra(ps, 0);
	rb(ps, 0);
	if (flag)
	{
		ft_printf("rr\n");
		ps->count++;
	}
}

/* 	
	flag 1 pints the move
	flag 0 doesn´t
*/
void	rrr(t_ps *ps, int flag)
{
	if (ps->asize < 2 || ps->bsize < 2)
		error("KO", ps);
	rra(ps, 0);
	rrb(ps, 0);
	if (flag)
	{
		ft_printf("rrr\n");
		ps->count++;
	}	
}
