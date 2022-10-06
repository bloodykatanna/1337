/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:00:40 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/05 12:50:43 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *s1;
    char *s2;
    s1 = (char *)dst;
    s2 = (char *)src;

    if (!dst && !src)
        return (0);
 
    int i = 0;
    while (i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    return (dst);
}

#include <stdio.h>
int main()
{
    char s2[20] = "abcd";
    char s1[20] = "de";

    printf("memcpy :%s\n", memcpy(s1 + 2 , s2, 10));
    printf("ft_memcpy :%s", ft_memcpy(s1 + 2  , s2, 10));
}