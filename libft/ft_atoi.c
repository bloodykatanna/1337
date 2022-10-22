/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:16:50 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/19 17:56:39 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *str)
{
    int a = 0;
    int res = 0;
    int sign = 1;
    
    while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13) )
        a++;
    
    if (str[a] == '-' )
    {
         sign*= -1;
         a++;
    }   
    else if(str[a] == '+')
    {
        sign = 1;
        a++;
    }
    while ((str[a] >= '0' && str[a] <= '9' ) && str[a])
    {
        res = (res * 10) + str[a] - '0';
        a++;
    }
    return (res * sign);
}

