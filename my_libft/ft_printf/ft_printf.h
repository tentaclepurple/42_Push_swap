/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:47:36 by imontero          #+#    #+#             */
/*   Updated: 2023/06/06 14:47:36 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

char	*ftp_strchr(const char *s, int c);
int		ft_printnbr(int n);
int		ft_printnbru(unsigned int n);
int		ft_printstr(char *s);
int		ft_printchar(char c);
int		ft_printhex(unsigned int nbr, char format);
int		ft_printpointer(char *addr);
int		ft_printhexptr(unsigned long long int nbr);
int		ft_printf(const char *s, ...);
int		ft_formatspec(char format, va_list args);
int		ft_strlen_pf(char *str);
char	*ft_checkerror(char *str);

#endif
