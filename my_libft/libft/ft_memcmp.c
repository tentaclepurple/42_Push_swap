/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:11:34 by imontero          #+#    #+#             */
/*   Updated: 2023/07/11 10:36:48 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	compara dos bloques de memoria para determinar si son iguales o no
	La función toma tres argumentos:
	un puntero al primer bloque de memoria a comparar (s1),
	un puntero al segundo bloque de memoria a comparar (s2),
	y el número de bytes a comparar (n).
	Devuelve un entero que indica la relación entre los dos bloques de memoria.
	- Si los bloques son iguales:
		devuelve cero. 
	- Si el primer byte que difiere en los dos bloques de memoria
	es mayor en el bloque s1:
		devuelve un número positivo. 
	- Si el primer byte diferente en los dos bloques de memoria
	es mayor en el bloque s2:
		devuelve un número negativo.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
