/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:54:49 by imontero          #+#    #+#             */
/*   Updated: 2023/08/24 15:41:00 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char **argv, t_ps *ps)
{
	ft_printf("Error\n");
	if (ps->arg_flag == 1)
		free_argv(argv);
	exit(1);
}

void	free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	error(char *s, t_ps *ps)
{
	ft_printf("%s\n", s);
	free_stacks(ps);
	exit(1);
}

void	free_stacks(t_ps *ps)
{
	free(ps->a);
	free(ps->b);	
}