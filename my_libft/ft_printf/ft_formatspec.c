/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatspec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:58:16 by imontero          #+#    #+#             */
/*   Updated: 2023/06/09 09:07:03 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatspec(char format, va_list args)
{
	if (format == '%')
		return (ft_printchar('%'));
	else if (format == 'i' || format == 'd')
		return (ft_printnbr(va_arg(args, int)));
	else if (format == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (format == 'u')
		return (ft_printnbru(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_printhex(va_arg(args, unsigned long long int), format));
	else if (format == 'p')
		return (ft_printpointer(va_arg(args, char *)));
	else
		return (0);
}
