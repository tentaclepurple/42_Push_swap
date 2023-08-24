/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:56:40 by imontero          #+#    #+#             */
/*   Updated: 2023/06/09 10:21:52 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int nbr, char format)
{
	char	*base;
	int		len;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		len += ft_printhex(nbr / 16, format);
		len += ft_printhex(nbr % 16, format);
	}
	else
	{
		len += write(1, &base[nbr], 1);
	}
	return (len);
}
