/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:35:31 by imontero          #+#    #+#             */
/*   Updated: 2023/06/06 15:04:43 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	i[2];

	i[0] = 0;
	if (n == -2147483648)
	{
		i[0] += write(1, "-2", 2);
		i[0] += ft_printnbr(147483648);
	}
	else if (n < 0)
	{
		i[0] += write(1, "-", 1);
		i[0] += ft_printnbr(-n);
		n *= -1;
	}
	else if (n >= 10)
	{
		i[0] += ft_printnbr(n / 10);
		i[0] += ft_printnbr(n % 10);
	}
	else
	{
		i[1] = n + 48;
		i[0] += write(1, &i[1], 1);
	}
	return (i[0]);
}
