/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:14:54 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/19 12:20:44 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int lennn(long nn)
{
    int i;

    i = 1;
    if (nn < 0)
    {
        nn *= -1;
        i++;
    }
    while (nn >= 10)
    {
        nn = nn / 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    long nb;
    char *aptx;
    int i;

    nb = n;
    i = lennn(nb);
    aptx = malloc(sizeof(char) * (lennn(nb) + 1));
    if (!aptx)
        return NULL;
    if (nb == 0)
    {
        aptx[0] = '0';
        aptx[1] = '\0';
        return (aptx);
    }
    if (nb < 0)
    {
        aptx[0] = '-';
        nb = nb * -1;
    }
    aptx[i] = '\0';
    while (nb > 0)
    {
        i--;
        aptx[i] = (nb % 10) + 48;
        nb = nb / 10;
    }
    return (aptx);
}