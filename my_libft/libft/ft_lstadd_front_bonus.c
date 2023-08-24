/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:28:19 by imontero          #+#    #+#             */
/*   Updated: 2023/07/11 10:38:22 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Añade el nodo ’new’ al principio de la lista ’lst’.
	
	Parámetros 
	lst: la dirección de un puntero al primer nodo de una lista.
	new: un puntero al nodo que añadir al principio de la lista.
	
	Valor devuelto Nada
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
