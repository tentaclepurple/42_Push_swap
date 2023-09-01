/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:50:33 by imontero          #+#    #+#             */
/*   Updated: 2023/09/01 13:11:07 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_ps *ps)
{
	//int	i;

//	i = 0;
	find_max_min_a(ps);
	find_second_min_a(ps);
	printf("%li %li\n", ps->amin, ps->a2min);
}

void	find_second_min_a(t_ps *ps)
{
	int	i;

	i = 0;
	ps->a2min = INT_MAX;
		while (i < ps->asize)
	{
		if (ps->a[i] < ps->a2min && ps->a[i] != ps->amin)
			ps->a2min = ps->a[i];
	}
	i++;
}