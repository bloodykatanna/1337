/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:00:53 by azaghlou          #+#    #+#             */
/*   Updated: 2022/03/28 15:28:59 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	check_func(char a, char b, char c)
{
	if ((a != 55 || b != 56 || c != 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;	
	char	b;	
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{	
			c = b + 1;
			while (c <= 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				check_func(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
