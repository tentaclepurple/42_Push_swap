/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:48:01 by imontero          #+#    #+#             */
/*   Updated: 2023/08/24 19:03:05 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 

# include "my_libft/libft/libft.h"
# include <stdio.h>
# include <stdbool.h>
# include <unistd.h>
//# include <limits.h>


typedef struct s_ps
{
long	*a;
long	*b;
int	asize;
int	bsize;
int	arg_flag;

//char	*argv;

}	t_ps;

void	error_exit(char **argv, t_ps *ps);
void	error(char *s, t_ps *ps);
void	free_argv(char **argv);
void	free_stacks(t_ps *ps);
int		init_parse(char **argv, t_ps *ps);
int		check_nums(char	**argv, t_ps *ps);
int		check_repeats_limits(t_ps *ps);
void	fill_stack(char **argv, t_ps *ps);
void	print_stacks(t_ps *ps);
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

//int		ft_atoli(char *str, char **argv, t_ps *ps);



#endif