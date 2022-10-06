/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:29:25 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/06 15:42:11 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    
    while (s[i] && s[0] != '\0')
    {
        if(s[i] == c)
        {
            return (char *) &s[i];
        }
        i++;
    }
    return(0);
}

// #include <stdio.h>
// int main()
// {
//     const char *str = "amine";
//     int x = 'm' ;
//     printf("strchr :%s", strchr(str, x ));
//     printf("\nft_strchr :%s", ft_strchr(str, x ));
// }