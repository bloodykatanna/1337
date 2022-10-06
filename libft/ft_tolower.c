/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:50:26 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/01 13:02:08 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_tolower( int a)
{
    if (a >= 65 && a <= 90)
    {
        return (a + 32);
    }
    return(a);
} 


// #include <ctype.h>
// #include <xlocale.h>
// #include <stdio.h>

// int main()
// {
//     //int b = 47;
//     printf("tolower: %d",tolower('/'));
//     printf("\nft_tolower: %d ", ft_tolower('/'));
// }
