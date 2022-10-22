/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:20:57 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/08 19:45:25 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *s1;
    char *s2;
    s1 = (char *)haystack;
    s2 = (char *)needle;

    size_t j = 0;
    size_t i = 0;

    if (s2[0] == '\0')
        return (s1);
    if (len == 0)
        return (NULL);
    while (s1[i + j] != '\0' && i < len)
    {
        j = 0;
        while (i + j < len && s1[i + j] == s2[j])
        {
            j++;
            if (s2[j] == '\0')
                return (&s1[i]);
        }
        i++;
    }
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     char *s1 = "london";
//     char *s2 = "nd";
//     printf("ft_strnstr :%s", ft_strnstr(s1, s2, 3));
//     printf("\nstrnstr :%s", strnstr(s1, s2, 3));
// }
