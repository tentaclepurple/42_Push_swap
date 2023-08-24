/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkerror.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:01:16 by imontero          #+#    #+#             */
/*   Updated: 2023/08/22 16:17:01 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_checkerror(char *str)
{
	int	i;

	i = 0;
	while (i < (ft_strlen_pf(str) - 1))
	{
		if (str[i] == '%' && str[i + 1] == '%')
			return (str);
		if (str[i] == '%' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			return (NULL);
		i++;
	}
	return (str);
}
