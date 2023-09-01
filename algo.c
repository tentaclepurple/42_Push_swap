/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:49:29 by imontero          #+#    #+#             */
/*   Updated: 2023/09/01 14:21:48 by imontero         ###   ########.fr       */
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
	//printf("%i, %li", ps->asize, ps->amax);
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
	inicia el ordenamiento para mas de 3 numeros.
	envia los 3 primeros del stack A al B y los ordena de mayor a menor
*/
void	sort_plus_three(t_ps *ps)
{
	pb(ps, 1);
	pb(ps, 1);
	pb(ps, 1);
	print_stacks(ps);
	sort_three(ps, 0);
	pb(ps, 1);
		
/*	while (ps->asize > 0)
	{
		//printf("size a %i\n", ps->asize);
		costs_calculus(ps);
		move_cheapest(ps);
		//reset_costs_matrix(ps);
	}
*/	print_stacks(ps);
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
