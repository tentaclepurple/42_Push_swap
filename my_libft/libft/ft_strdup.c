/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:01:46 by imontero          #+#    #+#             */
/*   Updated: 2023/04/20 14:01:46 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	duplica un string con malloc
*/

char	*ft_strdup(const char *str)
{
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int		main(void)
{
	const char	*str;
	char	*str2;
	
	str = "HELL-o";
	str2 = ft_strdup(str);
	printf("%s\n", str2);
	free(str2);
	return (0);
}
*/
