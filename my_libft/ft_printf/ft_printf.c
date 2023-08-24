/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:26:31 by imontero          #+#    #+#             */
/*   Updated: 2023/06/05 13:27:26 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, s);
	i = 0;
	len = 0;
	if (!s)
		return (0);
	if (ft_checkerror((char *)s) == NULL)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%' && ftp_strchr("cspdiuxX%", s[i + 1]) != NULL)
		{
			len += ft_formatspec(s[i + 1], args);
			i++;
		}
		else
			len += write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
