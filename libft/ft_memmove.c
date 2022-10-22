/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:55:46 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/22 01:36:38 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    int j;
    char *s1;
    char *s2;

    i = 0;
    j = ft_strlen(dst);
    s1 = (char *)dst;
    s2 = (char *)src;

    if (!dst && !src)
        return (0);

    if (s1 > s2)
    {
        while (j)
        {
            s1[j] = s2[j];
            j--;
        }
        return s1;
    }
    else
    {
        while (i < len)
        {
            s1[i] = s2[i];
            i++;
        }
        return (dst);
    }
}

//     size_t j ;
//     size_t i ;
//     i = ft_strlen(dst);
//     j = ft_strlen(src);
//     char *s1;
//     char *s2;
//     char s3[i];
//     s1 = (char *)dst;
//     s2 = (char *)src;
//     if (!dst || !src )
//         return 0;
//     while (j > len)
//     {
//         s3[j] = s2[i];
//         j++;
//     }
//     j = 0;
//     while ( j <len )
//     {
//         s1[j] = s3[j];
//         j++;
//     }
//     return (s1);