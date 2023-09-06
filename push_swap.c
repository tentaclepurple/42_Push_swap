/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:23:07 by imontero          #+#    #+#             */
/*   Updated: 2023/09/02 13:23:44 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_sort(t_ps *ps)
{
	if (!is_order_a(ps))
	{
		if (ps->asize == 2)
			sa(ps, 1);
		else if (ps->asize == 3)
			sort_three(ps, 1);
		else if (ps->asize > 3 && ps->asize <= 5)
			sort_five(ps);
		else
			sort_plus_five(ps);
	}
}

int	init_parse(char **argv, t_ps *ps)
{
	check_nums(argv, ps);
	fill_stack(argv, ps);
	if (ps->arg_flag == 1)
		free_argv(argv);
	check_repeats_limits(ps);
	return (1);
}

void	fill_stack(char **argv, t_ps *ps)
{
	int	i;

	i = 0;
	ps->bsize = 0;
	ps->totalsize = ps->asize;
	ps->a = malloc(sizeof(long) * ps->totalsize);
	ps->b = malloc(sizeof(long) * ps->totalsize);
	ps->costs = malloc(sizeof(int *) * ps->totalsize);
	while (i < ps->totalsize)
	{
		ps->costs[i] = malloc(sizeof(int) * 12);
		ft_bzero(ps->costs[i], sizeof(int) * 12);
		i++;
	}
	i = 0;
	while (argv[i])
	{
		ps->a[i] = ft_atoi(argv[i]);
		i++;
	}
}
