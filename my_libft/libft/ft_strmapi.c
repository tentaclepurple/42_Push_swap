/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:21:41 by imontero          #+#    #+#             */
/*   Updated: 2023/04/28 09:21:41 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	A cada carácter de la string s, aplica la función f dando como parámetros
	el índice de cada carácter dentro de s y el propio carácter.
	Genera una nueva string con el resultado del uso sucesivo de f
	
	- Parámetros 
	s: La string que iterar.
	f: La función a aplicar sobre cada carácter.
	
	- Valor devuelto
	La string creada tras el correcto uso de ’f’ sobre cada carácter.
	NULL si falla la reserva de memoria.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
