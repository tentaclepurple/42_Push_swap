/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:55:55 by imontero          #+#    #+#             */
/*   Updated: 2023/08/30 13:03:55 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_max_min_b(t_ps *ps)
{
	int	i;
	
	i = 0;
	ps->bmax = ps->b[i];
	ps->bmin = ps->b[i];
	while (i < ps->bsize)
	{
		if (ps->b[i] > ps->bmax)
		{
			ps->bmax = ps->b[i];
			ps->bmaxidx = i;
		}
		else if (ps->b[i] < ps->bmin)
		{
			ps->bmin = ps->b[i];
			ps->bminidx = i;			
		}
		i++;		
	}
}

/* 
	busca el indice del numero que va a recibir B
	recibe el nuevo numero
	devuelve el indice que va a ocupar
*/
int	find_target_index_in_b(long	new, t_ps *ps)
{
	find_max_min_b(ps);
	if (is_order_b(ps))
		return(find_target_aux_rev_ord(new, ps));
	else
		if (new < ps->b[ps->bsize - 1])
			return (find_target_aux_top(new, ps));
		else
			return (find_target_aux_bottom(new, ps));
}		

int	find_target_aux_rev_ord(long new, t_ps *ps)
{
	int	i;

	i = 0;
	while (i < ps->bsize)
	{
		if (new < ps->b[i])
			i++;
		else
			return (i);
	}
	if (i == ps->bsize)
		i = 0;
	return (i);
}

int	find_target_aux_top(long new, t_ps *ps)
{
	int	i;
	
	i = 0;
	while (i < ps->bmaxidx)
	{
		if (new < ps->b[i])
			i++;
		else
			return (i);
	}
	return (i);
}

int	find_target_aux_bottom(long new, t_ps *ps)
{
	int	i;
	
	i = ps->bmaxidx;
	while (i < ps->bsize)
	{
		if (new < ps->b[i])
			i++;
		else
			return (i);
	}
	return (i);
}
