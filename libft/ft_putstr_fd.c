/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:28:40 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/23 21:49:32 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// #include <fcntl.h>
// #include <stdio.h>

// int main()
// {
//     char *s;
//     s = "aptx";
//     //open("a.txt", O_CREAT);
//     int fd = open("a.txt",O_CREAT | O_RDWR);
//     ft_putstr_fd(s, fd);
// }
