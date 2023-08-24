/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:56:11 by imontero          #+#    #+#             */
/*   Updated: 2023/06/16 13:27:03 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Busca cierto carácter dentro de una cadena de texto desde delante
	y devuelve un puntero al caracter encontrado
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&((char *)s)[i]);
		i++;
	}
	if (s[i] == (char) c)
		return (&((char *)s)[i]);
	return (0);
}
