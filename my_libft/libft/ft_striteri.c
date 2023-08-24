/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:21:25 by imontero          #+#    #+#             */
/*   Updated: 2023/04/28 09:21:25 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	A cada carácter de la string ’s’, aplica la función
	’f’ dando como parámetros el índice de cada
	carácter dentro de ’s’ y la dirección del propio
	carácter, que podrá modificarse si es necesario.

	-Parámetros 
	s: La string que iterar.
	f: La función a aplicar sobre cada carácter.

	-Valor devuelto
	Nada
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
