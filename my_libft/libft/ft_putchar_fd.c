/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:19:49 by imontero          #+#    #+#             */
/*   Updated: 2023/04/21 10:19:49 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Envía el carácter ’c’ al file descriptor
especificado.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
