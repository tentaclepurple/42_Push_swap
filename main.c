/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:49:29 by imontero          #+#    #+#             */
/*   Updated: 2023/08/24 22:42:26 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;
	
	//ft_memset(&ps, 0, sizeof(struct s_ps));
	ps.arg_flag = 0;
	if (argc == 1 || (2 == argc && !argv[1][0]))
		error_exit(argv, &ps);
	argv++;		
	if (argc == 2)
	{
		ps.arg_flag = 1;
		argv = ft_split(argv[0], ' ');
	}
	init_parse(argv, &ps);
	print_stacks(&ps);
	init_sort(&ps);
	
	print_stacks(&ps);
	
	free(ps.a);
	free(ps.b);
	//system("leaks push_swap");
	return (0);
}

void	init_sort(t_ps *ps)
{
	if (!check_order(ps))
	{
		if (ps->asize == 2)
			sa(ps, 1);
		if (ps->asize == 3)
			sort_three(ps);
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
	ps->a = malloc(sizeof(long) * ps->asize);
	ps->b = malloc(sizeof(long) * ps->asize);
	while (argv[i])
	{
		ps->a[i] = ft_atoi(argv[i]);
		i++;
	}
}

void	print_stacks(t_ps *ps)
{
	int	i;
	int	size;

	i = -1;
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
	if (check_order(ps))	
		printf("SORTED %i\n", check_order(ps));
	else
		printf(" NOT SORTED %i\n", check_order(ps));
	printf("--------------------------\n");

	printf("\n");
}
