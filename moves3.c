/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:52:34 by imontero          #+#    #+#             */
/*   Updated: 2023/08/24 19:01:59 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_ps *ps, int flag)
{
	if (ps->asize <= 1 || ps->bsize <= 1)
		error("Movement error ss", ps);
	sa(ps, 0);
	sb(ps, 0);
	if (flag)
		ft_printf("ss\n");
}

void	rr(t_ps *ps, int flag)
{
	if (ps->asize < 2 || ps->bsize < 2)
		error("Movement error rr", ps);
	ra(ps, 0);
	rb(ps, 0);
	if (flag)
		ft_printf("rr\n");
}

void	rrr(t_ps *ps, int flag)
{
	if (ps->asize < 2 || ps->bsize < 2)
		error("Movement error rrr", ps);
	rra(ps, 0);
	rrb(ps, 0);
	if(flag)
		ft_printf("rrr\n");	
}