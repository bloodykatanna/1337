/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 09:07:19 by azaghlou          #+#    #+#             */
/*   Updated: 2022/03/28 14:44:50 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	print_num(char n)
{
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			print_num(f / 10 + '0');
			print_num(f % 10 + '0');
			print_num(' ');
			print_num(s / 10 + '0');
			print_num(s % 10 + '0');
			if (f != 98)
			{
				print_num(',');
				print_num(' ');
			}
			s++;
		}
		f++;
	}
}
