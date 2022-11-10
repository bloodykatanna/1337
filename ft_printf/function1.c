/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:04:48 by azaghlou          #+#    #+#             */
/*   Updated: 2022/11/03 12:29:20 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] != '\0')
	{
		i += ft_putchar(s[i]);
	}
	return (i);
}

int	len_nbr(long b)
{
	int	i;

	i = 0;
	if (b == 0)
		i++;
	if (b < 0)
		b = -b;
	while (b > 0)
	{
		b /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int b)
{
	long	a;
	int		i;

	a = b;
	i = 0;
	if (a == -2147483648)
		return (ft_putstr("-2147483648"));
	if (a < 0)
	{
		a = -a;
		ft_putchar('-');
		i++;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
	return (len_nbr(a) + i);
}
