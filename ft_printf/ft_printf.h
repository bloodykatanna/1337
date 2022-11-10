/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:34:22 by azaghlou          #+#    #+#             */
/*   Updated: 2022/11/01 21:50:05 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_printf(const char *s, ...);
int	ft_putnbr(int a);
int	ft_putstr(char *s);
int	ft_puthexalow(unsigned long a);
int	ft_puthexaup(unsigned long a);
int	ft_putnbr_u(unsigned int a);
int	ft_check(va_list arg, const char s);
int	len_nbr(long a);
int	len_nbr_u(unsigned int b);
int	len_hexa(unsigned long b);

#endif