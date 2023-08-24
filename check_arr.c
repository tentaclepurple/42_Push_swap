/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:54:49 by imontero          #+#    #+#             */
/*   Updated: 2023/08/24 15:42:15 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nums(char	**argv, t_ps *ps)
{
	int	i;
	int	j;
	
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (((argv[i][j] == '+' || argv[i][j] == '-')
					&& (argv[i][j - 1] != ' ' && argv[i][j - 1] != '\0')))
				error_exit(argv, ps);
			else if ((argv[i][j] > '9' || argv[i][j] < '0')
					&& argv[i][j] != '+' && argv[i][j] != '-')
				error_exit(argv, ps);
			else if ((argv[i][j] == '-' || argv[i][j] == '+')
					&& (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0'))
				error_exit(argv, ps);
			j++;
		}
		i++;
	ps->asize = i;
	}
	return (1);
}

int	check_repeats_limits(t_ps *ps)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < ps->asize)
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
		i++;
	}
	return (1);
}
