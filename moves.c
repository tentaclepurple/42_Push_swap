/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:52:34 by imontero          #+#    #+#             */
/*   Updated: 2023/09/01 14:39:36 by imontero         ###   ########.fr       */
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
	int	n;
	
	n = ps->bsize++;
	//ps->bsize++;
	//printf("n: %i, asize: %i, bsize: %i, \n", n, ps->asize, ps->bsize);
	if (ps->asize > 0)
	{
		while (n > 0)
		{
			ps->b[n] = ps->b[n - 1];
			n--;
		}
		ps->b[0] = ps->a[0];
		ps->asize--;
		while (n < ps->asize)
		{
			ps->a[n] = ps->a[n + 1];
			n++;
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
	int	n;
	
	n = ps->asize++;
	if (ps->bsize > 0)
	{
		while (n > 0)
		{
			ps->a[n] = ps->a[n - 1];
			n--;
		}
		ps->a[0] = ps->b[0];
		ps->bsize--;
		while (n < ps->bsize)
		{
			ps->b[n] = ps->b[n + 1];
			n++;
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
