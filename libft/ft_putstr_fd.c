/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:28:40 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/16 21:00:52 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
//    filds  write(fd, caractere, size caractere)
// 0 standard output r
// 1 standard input  w
// 2 standard error  rw error
// 3
// 4

// #include <fcntl.h>
// #include <stdio.h>

// int main()
// {
//     char *s;
//     s = "aptx4869";
//     // open("a.txt", O_CREAT);
//     int fd = open("a.txt",O_CREAT | O_RDWR);
//     ft_putstr_fd(s, fd);
// }