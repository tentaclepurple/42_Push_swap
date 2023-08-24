/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:47:29 by imontero          #+#    #+#             */
/*   Updated: 2023/06/09 10:22:41 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(char *addr)
{
	int	len;

	if (addr == NULL)
		return (write(1, "0x0", 3));
	len = ft_printstr("0x");
	len += ft_printhexptr((unsigned long long int)addr);
	return (len);
}
