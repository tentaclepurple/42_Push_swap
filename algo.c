/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:49:29 by imontero          #+#    #+#             */
/*   Updated: 2023/09/02 12:19:22 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 
	ord = 1 ordena pila A en orden ascendente
	ord = 0 ordena pila B en orden descendente
*/
void	sort_three(t_ps *ps, int ord)
{
	find_max_min_a(ps);
	if (ord)
	{
		if (ps->a[0] == ps->amax)
			ra(ps, 1);
		else if (ps->a[1] == ps->amax)
			rra(ps, 1);
		if (ps->a[0] > ps->a[1])
			sa(ps, 1);
	}
	else if (!ord)
	{
		find_max_min_b(ps);
		if (ps->b[0] == ps->bmin)
			rb(ps, 1);
		else if (ps->b[1] == ps->bmin)
			rrb(ps, 1);
		if (ps->b[0] < ps->b[1])
			sb(ps, 1);
	}
}

/*
	inicia el ordenamiento para mas de 5 numeros.
	envia los 3 primeros del stack A al B y los ordena de mayor a menor
*/
void	sort_plus_five(t_ps *ps)
{
	pb(ps, 1);
	pb(ps, 1);
	pb(ps, 1);
	sort_three(ps, 0);
	while (ps->asize > 0)
	{
		find_max_min_b(ps);
		costs_calculus(ps);
		move_cheapest(ps);
		reset_costs_matrix(ps);
	}
	final_order_b(ps);
	return_to_a(ps);
}

void	move_cheapest(t_ps *ps)
{
	int	ch;

	ch = get_cheapest(ps);
	move_cheapest_aux(ps, ch);
	move_cheapest_aux2(ps, ch);
	move_cheapest_aux3(ps, ch);
	if (ps->costs[ch][10] > 0)
	{
		while (ps->costs[ch][10] > 0)
		{
			rb(ps, 1);
			ps->costs[ch][10]--;
		}
	}
	pb(ps, 1);
}
