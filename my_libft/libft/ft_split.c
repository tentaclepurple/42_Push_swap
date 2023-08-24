/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:36:54 by imontero          #+#    #+#             */
/*   Updated: 2023/05/15 12:36:40 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Reserva (utilizando malloc(3)) un array de strings
	resultante de separar la string ’s’ en substrings
	utilizando el caracter ’c’ como delimitador. El
	array debe terminar con un puntero NULL.
	
	- Parámetros 
	s: La string a separar.
	c: El carácter delimitador.

	- Valor devuelto 
	El array de nuevas strings resulatente de la separación.
	NULL si falla la reserva de memoria.
*/

static char	**ft_freeall(char **tab, int k)
{
	while (k >= 0)
	{
		free(tab[k]);
		k--;
	}
	free(tab);
	return (NULL);
}

static int	ft_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[0] && s[0] != c)
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (i != 0 && s[i] != c && s[i - 1] == c)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_strings(char **tab, char *s, char c)
{
	int	i;
	int	start;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			start = 0;
		if (i == 0 && s[i] == c)
			i++;
		if (i && s[i - 1] == c && s[i] != c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[j] = ft_substr(s, start, i - start + 1);
			if (!tab[j])
				return (ft_freeall(tab, j - 1));
			j++;
		}
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**tab;

	if (!s)
		return (NULL);
	count = ft_count((char *)s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	tab[count] = 0;
	return (ft_strings(tab, (char *)s, c));
}
