/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:11:54 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/06 11:07:39 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    if (dstsize == 0 /*||dst[0] == '\0' || src[0] == '\0'*/)
        return (ft_strlen(src));

    size_t j = 0;
    while (j < dstsize - 1 && src[j] != '\0')
    {
        dst[j] = src[j];
        j++;
    }
    dst[j] = '\0';
    return(ft_strlen(src));
}

// #include <stdio.h>
// int main()
// {
//     char s1[] = "amine";
//     char s2[] = "zaghloul";
//     strlcpy(s1,s2,5);
//     printf("strlcpy :%s",s1);
//     // ft_strlcpy(s1,s2,5);
//     // printf("\nft_strlcpy :%s",s1);
// }
