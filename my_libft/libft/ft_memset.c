/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:33:54 by imontero          #+#    #+#             */
/*   Updated: 2023/04/19 19:33:54 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	copia el carácter c (un carácter sin signo) 
	en los primeros n caracteres de la cadena 
	a la que apunta el argumento str
*/

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = ptr;
	i = 0;
	while (i < n)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
