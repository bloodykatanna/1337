/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:20:45 by azaghlou          #+#    #+#             */
/*   Updated: 2022/03/28 14:42:51 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	l;
	char	m;

	l = 'N';
	m = 'P';
	if (n < 0)
	{
		write (1, &l, 1);
	}
	else
	{
		write (1, &m, 1);
	}
}