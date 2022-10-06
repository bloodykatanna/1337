/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:04:13 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/06 10:01:06 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t i = 0;
    size_t j = 0;
    if (dst[0] == '\0')
        return 0;
    if (dstsize == 0)
        return 0;    
    while (dst[i])
    {
        i++;
    }
    dst = dst[dstsize];
    
    if (i > dstsize)
        return 0;
    while (dst[i+1] && i < dstsize)
    {
        dst[i+1] = src[j];
        i++;
        j++;
    }
    dst[dstsize] = '\0';
    return(dst);
}
