/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:49:29 by imontero          #+#    #+#             */
/*   Updated: 2023/09/02 12:30:25 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;

	ft_memset(&ps, 0, sizeof(struct s_ps));
	ps.arg_flag = 0;
	if (argc == 1 || (2 == argc && !argv[1][0]))
		return (ft_printf("\n"));
	argv++;
	if (argc == 2)
	{
		ps.arg_flag = 1;
		argv = ft_split(argv[0], ' ');
	}
	init_parse(argv, &ps);
	init_sort(&ps);
	free_stacks(&ps);
	return (0);
}

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

/*void	print_stacks(t_ps *ps)
{
	int	i = -1;
	int	size;

	if (ps->asize > ps->bsize)
		size = ps->asize;
	else
		size = ps->bsize;
	printf("\n");	
	printf("--------------------------\n");
	printf("%12s %12s\n", "A", "B");
	printf("--------------------------\n");
	printf("%-s %7i %12i\n", "size", ps->asize, ps->bsize);
	printf("--------------------------\n");
	while(++i < size)
		printf("%12li %12li\n", ps->a[i], ps->b[i]);
	printf("--------------------------\n");
	if (is_order_a(ps))	
		printf("SORTED %i\n", is_order_a(ps));
	else
		printf(" NOT SORTED %i\n", is_order_a(ps));
	printf("--------------------------\n");
	printf("Count: %i\n", ps->count);
	printf("\n");
}

void	print_costs_matrix(t_ps *ps)
{
	int i = 0;
	int j = 0;

	while (i < ps->asize)
	{
		j = 0;
		printf("%2i: ", i);
		while (j < 12)
		{
			printf("%3i ", ps->costs[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}*/