/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:22:23 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/13 19:00:05 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int s;
    s = n;
    if (s < 0)
    {
        s *= -1;
        ft_putchar_fd('-', fd);
    }
    if (s >= 10)
    {
        ft_putnbr_fd(s / 10, fd);
        ft_putnbr_fd(s % 10, fd);
    }
    else
        ft_putchar_fd(s + 48, fd);
}


// int main()
// {
//     int a= -5555;
//     //fd = 
//     ft_putnbr_fd(a, 1);
// }