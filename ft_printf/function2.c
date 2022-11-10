/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:52:14 by azaghlou          #+#    #+#             */
/*   Updated: 2022/11/01 21:52:53 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_hexa(unsigned long b)
{
	int	i;

	i = 1;
	while (b >= 16)
	{
		b = b / 16;
		i++;
	}
	return (i);
}

int	ft_puthexalow(unsigned long a)
{
	if (a >= 16)
	{
		ft_puthexalow(a / 16);
		ft_puthexalow(a % 16);
	}
	else
		ft_putchar("0123456789abcdef"[a]);
	return (len_hexa(a));
}

int	ft_puthexaup(unsigned long a)
{
	if (a >= 16)
	{
		ft_puthexaup(a / 16);
		ft_puthexaup(a % 16);
	}
	else
		ft_putchar("0123456789ABCDEF"[a]);
	return (len_hexa(a));
}

int	len_nbr_u(unsigned int b)
{
	int	i;

	i = 0;
	if (b < 0)
		b = -b;
	while (b > 0)
	{
		b /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_u(unsigned int a)
{
	if (a == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (a >= 10)
	{
		ft_putnbr_u(a / 10);
		ft_putnbr_u(a % 10);
	}
	else
		ft_putchar(a + '0');
	return (len_nbr_u(a));
}
