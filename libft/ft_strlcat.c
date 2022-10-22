/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:04:13 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/14 11:15:33 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t x;
    
	if (!dstsize)
        return (0);

        
    i = 0;
    x = ft_strlen(src) + ft_strlen(dst);
    j = ft_strlen(dst);
    if(!dst)
        return ft_strlen(src);

    if (dstsize < j)
        return (dstsize + ft_strlen(src) );

    while (src[i] != '\0' && j < dstsize - 1)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    return (x);
}

//#include<stdio.h>
// int main()
// {
//     char dst[] = "aptx48";
//     char src[] = "chaknannnn";
//     printf("--> %zu\n", ft_strlcat(dst, src, 6));
// }