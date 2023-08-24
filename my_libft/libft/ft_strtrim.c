/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:09:38 by imontero          #+#    #+#             */
/*   Updated: 2023/07/14 12:09:08 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    recorta los caracteres de set enconcontrados en s en las primeras
    y ultimas
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(1 + len * sizeof(char));
	if (!sub)
		return (NULL);
	sub[len] = '\0';
	while (s[start] && len > 0)
	{
		len--;
		sub[len] = s[start + len];
	}
	return (sub);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

static int	ft_findstart(char *s1, char *set)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (set[i])
	{
		while (set[i] == s1[start])
		{
			start++;
			i = 0;
		}
		i++;
	}
	return (start);
}

static int	ft_findend(char *s1, char *set)
{
	int	i;
	int	end;

	i = ft_strlen(set) - 1;
	end = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		while (set[i] == s1[end])
		{
			end--;
			i = ft_strlen(set) - 1;
		}
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	start = ft_findstart((char *)s1, (char *)set);
	end = ft_findend((char *)s1, (char *)set);
	new = ft_substr((char *)s1, start, (end + 1) - start);
	return (new);
}
