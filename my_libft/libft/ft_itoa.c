/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:33:52 by imontero          #+#    #+#             */
/*   Updated: 2023/05/15 08:15:51 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres
	que representa el número pasado como argumento. Se debe manejar
	la conversión de números negativos.
*/

static size_t	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;

	num = n;
	len = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	while (num / 10 != 0)
	{
		str[len - 1] = (num % 10) + '0';
		len--;
		num = num / 10;
	}
	str[len - 1] = (num % 10) + '0';
	return (str);
}
