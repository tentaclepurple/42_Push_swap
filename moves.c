/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:52:34 by imontero          #+#    #+#             */
/*   Updated: 2023/09/02 12:16:27 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 	flag recibe 0 o 1 para imprimir el movimiento
	si no lo imrime es porque hay un movimiento doble
	que imprimirá su propio movimiento ss, rr, rrr 
*/
void	sa(t_ps *ps, int flag)
{
	long	tmp;

	if (ps->asize <= 1)
		error("Movement error sa", ps);
	tmp = ps->a[0];
	ps->a[0] = ps->a[1];
	ps->a[1] = tmp;
	if (flag)
	{
		ft_printf("sa\n");
		ps->count++;
	}
}

/* 	flag recibe 0 o 1 para imprimir el movimiento
	si no lo imrime es porque hay un movimiento doble
	que imprimirá su propio movimiento ss, rr, rrr 
*/
void	sb(t_ps *ps, int flag)
{
	long	tmp;

	if (ps->bsize <= 1)
		error("Movement error sb", ps);
	tmp = ps->b[0];
	ps->b[0] = ps->b[1];
	ps->b[1] = tmp;
	if (flag)
	{
		ft_printf("sb\n");
		ps->count++;
	}
}

/* 	flag recibe 0 o 1 para imprimir el movimiento
	si no lo imrime es porque hay un movimiento doble
	que imprimirá su propio movimiento ss, rr, rrr 
*/
void	pb(t_ps *ps, int flag)
{
	ps->l = ps->bsize++;
	if (ps->asize > 0)
	{
		while (ps->l > 0)
		{
			ps->b[ps->l] = ps->b[ps->l - 1];
			ps->l--;
		}
		ps->b[0] = ps->a[0];
		ps->asize--;
		while (ps->l < ps->asize)
		{
			ps->a[ps->l] = ps->a[ps->l + 1];
			ps->l++;
		}
		ps->a[ps->asize] = 0;
		if (flag)
		{
			ft_printf("pb\n");
			ps->count++;
		}
	}
	else
		error("Movement error pb", ps);
}

/* 	flag recibe 0 o 1 para imprimir el movimiento
	si no lo imrime es porque hay un movimiento doble
	que imprimirá su propio movimiento ss, rr, rrr 
*/
void	pa(t_ps *ps, int flag)
{
	ps->l = ps->asize++;
	if (ps->bsize > 0)
	{
		while (ps->l > 0)
		{
			ps->a[ps->l] = ps->a[ps->l - 1];
			ps->l--;
		}
		ps->a[0] = ps->b[0];
		ps->bsize--;
		while (ps->l < ps->bsize)
		{
			ps->b[ps->l] = ps->b[ps->l + 1];
			ps->l++;
		}	
		ps->b[ps->bsize] = 0;
		if (flag)
		{
			ft_printf("pa\n");
			ps->count++;
		}
	}
	else
		error("Movement error pa", ps);
}
