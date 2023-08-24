/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:48:24 by imontero          #+#    #+#             */
/*   Updated: 2023/06/09 10:22:26 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexptr(unsigned long long int nbr)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		len += ft_printhexptr(nbr / 16);
		len += ft_printhexptr(nbr % 16);
	}
	else
	{
		len += write(1, &base[nbr], 1);
	}
	return (len);
}
