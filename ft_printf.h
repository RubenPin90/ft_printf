/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:48:19 by rpinchas          #+#    #+#             */
/*   Updated: 2022/11/18 13:04:19 by rpinchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# include <ctype.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <bsd/string.h>
# include <stdarg.h>
# include <limits.h>
# define FT_PRINTF_H

int		ft_printf(const char *c, ...);
int		ft_check(va_list arg, const char *c);
int		ft_checkformat(va_list arg, char c);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printint(long d, char c);
int		ft_printp(unsigned long long p, char c);
int		ft_countnbr(unsigned long d, char c, int base);
void	ft_putnbr_base(unsigned long long x, char c, int base);
#endif
