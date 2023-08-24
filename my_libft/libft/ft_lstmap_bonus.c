/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:56:52 by imontero          #+#    #+#             */
/*   Updated: 2023/05/03 16:27:55 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*lstnew;
	void	*a;

	lstnew = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		a = f(lst->content);
		new = ft_lstnew(a);
		if (!new)
		{
			free(a);
			ft_lstclear(&new, del);
		}
		ft_lstadd_back(&lstnew, new);
		lst = lst->next;
	}
	return (lstnew);
}
