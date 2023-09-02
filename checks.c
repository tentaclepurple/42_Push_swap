/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:54:49 by imontero          #+#    #+#             */
/*   Updated: 2023/09/02 12:23:34 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_nums(char	**argv, t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] > '9' || argv[i][j] < '0')
					&& argv[i][j] != '+' && argv[i][j] != '-')
				error_exit(argv, ps);
			else if ((argv[i][j] == '+' || argv[i][j] == '-')
					&& (argv[i][j + 1] > '9' || argv[i][j + 1] < '0'))
				error_exit(argv, ps);
			else if ((argv[i][j] < '9' || argv[i][j] > '0')
					&& (argv[i][j + 1] == '+' || argv[i][j + 1] == '-'))
				error_exit(argv, ps);
			else if (ft_strlen(argv[i]) > 11)
				error_exit(argv, ps);
			j++;
		}
		i++;
	ps->asize = i;
	}
}

int	check_repeats_limits(t_ps *ps)
{
	int	i;
	int	j;

	i = -1;
	while (++i < ps->asize)
	{
		j = 0;
		while (j < ps->asize)
		{
			if (ps->a[i] > INT_MAX || ps->a[i] < INT_MIN)
				error("Error", ps);
			if (ps->a[i] == ps->a[j] && i != j)
				error("Error", ps);
			j++;
		}
	}
	return (1);
}

/* 
	Comprueba si el array A esta ordenado de menor a mayor.
	devuelve 1 si esta ordenado y 0 si no.	
 */
int	is_order_a(t_ps *ps)
{
	int	n;

	n = 0;
	while (n < ps->asize - 1)
	{
		if (ps->a[n] > ps->a[n + 1])
			return (0);
		n++;
	}
	return (1);
}

/* 
	Comprueba si el array B esta ordenado de mayor a menor.
	devuelve 1 si esta ordenado y 0 si no.	
 */
int	is_order_b(t_ps *ps)
{
	int	n;

	n = 0;
	while (n < ps->bsize - 1)
	{
		if (ps->b[n] < ps->b[n + 1])
			return (0);
		n++;
	}
	return (1);
}

void	find_max_min_a(t_ps *ps)
{
	int	i;

	i = 0;
	ps->amax = ps->a[i];
	ps->amin = ps->a[i];
	while (i < ps->asize)
	{
		if (ps->a[i] > ps->amax)
			ps->amax = ps->a[i];
		else if (ps->a[i] < ps->amin)
		{
			ps->amin = ps->a[i];
			ps->aminidx = i;
		}
		i++;
	}
}
