/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:00:19 by imontero          #+#    #+#             */
/*   Updated: 2023/09/04 08:44:35 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;

	ft_memset(&ps, 0, sizeof(struct s_ps));
	ps.arg_flag = 0;
	if (argc == 1 || (2 == argc && !argv[1][0]))
		return (0);
	argv++;
	if (argc == 2)
	{
		ps.arg_flag = 1;
		argv = ft_split(argv[0], ' ');
	}
	init_parse(argv, &ps);
	get_moves(&ps);
	free_stacks(&ps);
	return (0);
}

void	get_moves(t_ps *ps)
{
	char	*line;

	(void)ps;
	line = get_next_line(0);
	while (line)
	{
		do_checker_moves(ps, line);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (is_order_a(ps) && !ps->bsize)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void	do_checker_moves(t_ps *ps, char *line)
{
	if (!ft_strcmp("pb\n", line))
		pb(ps, 0);
	else if (!ft_strcmp("pa\n", line))
		pa(ps, 0);
	else if (!ft_strcmp("ra\n", line))
		ra(ps, 0);
	else if (!ft_strcmp("rb\n", line))
		rb(ps, 0);
	else if (!ft_strcmp("rra\n", line))
		rra(ps, 0);
	else if (!ft_strcmp("rrb\n", line))
		rrb(ps, 0);
	else if (!ft_strcmp("sa\n", line))
		sa(ps, 0);
	else if (!ft_strcmp("sb\n", line))
		sb(ps, 0);
	else if (!ft_strcmp("rr\n", line))
		rr(ps, 0);
	else if (!ft_strcmp("rrr\n", line))
		rrr(ps, 0);
	else if (!ft_strcmp("ss\n", line))
		ss(ps, 0);
	else
		error_input(ps, line);
}

void	error_input(t_ps *ps, char *line)
{
	printf("Error\n");
	free_stacks(ps);
	free(line);
	exit(-1);
}
