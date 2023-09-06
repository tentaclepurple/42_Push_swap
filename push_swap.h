/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:48:01 by imontero          #+#    #+#             */
/*   Updated: 2023/09/04 18:01:49 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 

# include "my_libft/libft/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_ps
{
	long	*a;
	long	*b;
	long	amax;
	long	amin;
	long	a2min;
	int		aminidx;
	int		a2minidx;
	long	bmax;
	int		bmaxidx;
	long	bmin;
	int		bminidx;
	int		totalsize;
	int		asize;
	int		bsize;
	int		**costs;
	int		r_balan;
	int		rr_balan;
	int		r_rr_balan;
	int		rr_r_balan;
	int		arg_flag;
	int		n;
	int		l;
	int		count;
}	t_ps;

/* MOVES */
void	sa(t_ps *ps, int flag);
void	sb(t_ps *ps, int flag);
void	pa(t_ps *ps, int flag);
void	pb(t_ps *ps, int flag);
void	ra(t_ps *ps, int flag);
void	rb(t_ps *ps, int flag);
void	rra(t_ps *ps, int flag);
void	rrb(t_ps *ps, int flag);
void	ss(t_ps *ps, int flag);
void	rr(t_ps *ps, int flag);
void	rrr(t_ps *ps, int flag);

/* CHECKS */
void	check_nums(char	**argv, t_ps *ps);
int		check_repeats_limits(t_ps *ps);
int		is_order_a(t_ps *ps);
int		is_order_b(t_ps *ps);
void	find_max_min_a(t_ps *ps);
void	find_max_min_b(t_ps *ps);
void	find_second_min_a(t_ps *ps);
int		find_target_index_in_b(long new, t_ps *ps);
int		find_target_aux_rev_ord(long new, t_ps *ps);
int		find_target_aux_top(long new, t_ps *ps);
int		find_target_aux_bottom(long new, t_ps *ps);

/* ERRORS & FREES */
void	error_exit(char **argv, t_ps *ps);
void	error(char *s, t_ps *ps);
void	free_argv(char **argv);
void	free_stacks(t_ps *ps);

/* ALGOS */
int		init_parse(char **argv, t_ps *ps);
void	fill_stack(char **argv, t_ps *ps);
void	init_sort(t_ps *ps);
void	sort_three(t_ps *ps, int ord);
void	sort_five(t_ps *ps);
void	sort_five_move_min(t_ps *ps);
void	sort_five_move_2min(t_ps *ps);
void	sort_plus_five(t_ps *ps);
void	move_cheapest(t_ps *ps);
void	move_cheapest_aux(t_ps *ps, int ch);
void	move_cheapest_aux2(t_ps *ps, int ch);
void	move_cheapest_aux3(t_ps *ps, int ch);
void	final_order_b(t_ps *ps);
void	return_to_a(t_ps *ps);

/* ALGOS-COSTS */
void	costs_calculus(t_ps *ps);
void	costs_fill_raw(t_ps *ps, int src, int dst);
void	costs_optimization(t_ps *ps);
void	costs_optimization_rr(t_ps *ps, int i);
void	costs_optimization_rrr(t_ps *ps, int i);
void	costs_final_balance(t_ps *ps, int i);
void	costs_final_balance_aux_r(t_ps *ps, int i);
void	costs_final_balance_aux_rr(t_ps *ps, int i);
void	costs_final_balance_aux_r_rr(t_ps *ps, int i);
void	costs_final_balance_aux_rr_r(t_ps *ps, int i);
int		get_cheapest(t_ps *ps);
void	reset_costs_matrix(t_ps *ps);

/* BONUS */

void	get_moves(t_ps *ps);
void	do_checker_moves(t_ps *ps, char *line);
void	error_input(t_ps *ps, char *line);

#endif