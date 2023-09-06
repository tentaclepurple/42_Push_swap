/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:52:34 by imontero          #+#    #+#             */
/*   Updated: 2023/09/05 11:24:20 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 	
	flag 1 pints the move
	flag 0 doesn´t
*/
void	ra(t_ps *ps, int flag)
{
	long	tmp;
	int		i;

	i = 0;
	if (ps->asize > 1)
	{
		tmp = ps->a[i];
		while (i < ps->asize - 1)
		{
			ps->a[i] = ps->a[i + 1];
			i++;
		}
		ps->a[i] = tmp;
	}
	else
		error("KO", ps);
	if (flag)
	{
		ft_printf("ra\n");
		ps->count++;
	}
}

/* 	
	flag 1 pints the move
	flag 0 doesn´t
*/
void	rb(t_ps *ps, int flag)
{
	long	tmp;
	int		i;

	i = 0;
	if (ps->bsize > 1)
	{
		tmp = ps->b[i];
		while (i < ps->bsize - 1)
		{
			ps->b[i] = ps->b[i + 1];
			i++;
		}
		ps->b[i] = tmp;
	}
	else
		error("KO", ps);
	if (flag)
	{
		ft_printf("rb\n");
		ps->count++;
	}
}

/* 	
	flag 1 pints the move
	flag 0 doesn´t
*/
void	rra(t_ps *ps, int flag)
{
	long	tmp;
	int		n;

	n = ps->asize - 1;
	if (ps->asize == 0)
		error("KO", ps);
	tmp = ps->a[n];
	while (n > 0)
	{
		ps->a[n] = ps->a[n - 1];
		n--;
	}
	ps->a[0] = tmp;
	if (flag)
	{
		ft_printf("rra\n");
		ps->count++;
	}	
}

/* 	
	flag 1 pints the move
	flag 0 doesn´t
*/
void	rrb(t_ps *ps, int flag)
{
	long	tmp;
	int		n;

	n = ps->bsize - 1;
	if (ps->bsize == 0)
		error("KO", ps);
	tmp = ps->b[n];
	while (n > 0)
	{
		ps->b[n] = ps->b[n - 1];
		n--;
	}
	ps->b[0] = tmp;
	if (flag)
	{
		ft_printf("rrb\n");
		ps->count++;
	}
}
