/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:10:15 by azaghlou          #+#    #+#             */
/*   Updated: 2022/11/05 17:00:08 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list arg, char s)
{
	int	i;

	i = 0;
	if (s == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if ((s == 'd') || (s == 'i'))
		i += ft_putnbr(va_arg(arg, int));
	else if (s == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (s == 'u')
		i += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (s == 'x')
		i += ft_puthexalow(va_arg(arg, unsigned int));
	else if (s == 'X')
		i += ft_puthexaup(va_arg(arg, unsigned int));
	else if (s == 'p')
	{
		i += ft_putstr("0x");
		i += ft_puthexalow(va_arg(arg, unsigned long));
	}
	else if (s == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *s, ...)
{
	int		j;
	int		i;
	va_list	arg;

	j = 0;
	i = 0;
	va_start(arg, s);
	while (s[j])
	{
		if (s[j] == '%')
		{
			i += ft_check(arg, s[j + 1]);
			j++;
		}
		else
		{
			ft_putchar(s[j]);
			i++;
		}
		j++;
	}
	return (i);
}

// #include <stdio.h>

// int main()
// {
//     ft_printf("%d\n",221);
// }

//     char *d;
//     char ss[] = "aptxjjjj";

//     d = "amedfdf";

//     printf(" %d  \n ", printf("%i", 1412));

//     ft_printf(" %d  \n ", ft_printf("%d", 4869));
//     printf(" %d  \n ", printf("%d", 4869));

//     ft_printf(" %d  \n ", ft_printf("%c", 'a'));
//     printf(" %d  \n ", printf("%c", 'a'));

//     ft_printf(" %d  \n ", ft_printf("%x", 1412));
//     printf(" %d  \n ", printf("%x", 1412));

//     ft_printf(" %d  \n ", ft_printf("X", 1412));
//     printf(" %d  \n ", printf("%X", 1412));

//     ft_printf(" %d  \n ", ft_printf("%u", 1412));
//     printf(" %d  \n ", printf("%u", 1412));

//     ft_printf(" %d  \n ", ft_printf("%p", 1412));
//     printf(" %d  \n ", printf("%p", 1412));

//     ft_printf(" %d  \n ", ft_printf("%%", 1412));
//     printf(" %d  \n ", printf("%%", 1412));

// }