/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:35:30 by imontero          #+#    #+#             */
/*   Updated: 2023/05/15 12:15:06 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Busca una subcadena (needle) en una cadena de texto (haystack)
	en los primeros len caracteres.
	- haystack const void*	Este parámetro recoge el valor de la cadena
		en la que tenemos que buscar la subcadena (pajar)
	- needle const void*	Este parámetro recoge el valor de la subcadena
		 que tenemos que buscar en la cadena (aguja)
	- len 	size_t	Número de caracteres a buscar
	 needle = NULL ->  devuelve la cadena haystack
	 needle no se encuentra en haystack -> devuelve NULL
	 needle se encuentra en haystack -> devuelve un puntero al primer 
		carácter encontrado
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlen;
	size_t	i;

	i = 0;
	needlen = ft_strlen(needle);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (i + needlen > len)
			return (NULL);
		if (ft_strncmp(((char *)haystack + i), ((char *)needle), needlen) == 0)
			return (((char *)haystack + i));
		i++;
	}
	return (NULL);
}
