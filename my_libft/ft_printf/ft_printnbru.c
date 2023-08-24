/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbru.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:29:12 by imontero          #+#    #+#             */
/*   Updated: 2023/06/05 13:29:26 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbru(unsigned int n)
{
	int	b;
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_printnbr(n / 10);
		i += ft_printnbr(n % 10);
	}
	else
	{
		b = n + 48;
		i += write(1, &b, 1);
	}
	return (i);
}
