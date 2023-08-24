/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:40:12 by imontero          #+#    #+#             */
/*   Updated: 2023/05/08 12:49:16 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Concatena size caracteres de src detrás de dst.
	Si size (tamaño maximo) es menor que el tamaño de dst no concatena nada 
	y devuelve el tamaño de src + size
	
	Si no es asi, 
		copia src al final de dst (tamaño de dst, dstlen).
		Va copiando mientras i sea menor que tamaño total
		resultante (size) - dstlen, y -i para colocar el \0 antes de terminar.  
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (size <= dstlen)
		return (srclen + size);
	while (i < (size - dstlen - 1) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
