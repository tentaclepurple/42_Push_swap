/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:36:20 by imontero          #+#    #+#             */
/*   Updated: 2023/04/19 19:36:20 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	establecer todos los bytes de 
	un bloque de memoria en cero
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main() 
{
    int a = 5;
	
	char *str = (char*)malloc(10 * sizeof(char));
    ft_bzero(str, a);
	
	for (int i = 0; i < a; i++)
        printf("%c", str[i]);
    
	printf("\n");

	printf("%s", str);
	printf("\n");

	for (int i = 0; i < a; i++)
        printf("%d ", str[i]);
    
    printf("\n");
	free(str);

	printf("\n");

	char *str2 = (char*)malloc(10 * sizeof(char));
    bzero(str2, a);
	
	for (int i = 0; i < a; i++)
        printf("%c", str2[i]);
    
	printf("\n");
	
	printf("%s", str2);
	printf("\n");

	for (int i = 0; i < a; i++)
        printf("%d ", str2[i]);
    
    printf("\n");
	free(str2);

    return 0;
}
*/
