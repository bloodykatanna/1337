/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:05:58 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/20 23:54:49 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (c == s[i])
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *ss;
    size_t fpart;
    size_t lpart;
    size_t i;

    fpart = 0;
    lpart = ft_strlen(s1) ;
    i = 0;
    if (!s1)
        return NULL;
    if (!set)
        return (ft_strdup(s1));
    while (s1[fpart] && ft_check(set, s1[fpart]))
        fpart++;
    while (lpart > fpart && ft_check(set, s1[lpart - 1]))
        lpart--;
    ss = malloc(sizeof(char) * (lpart - fpart + 1));
    if (!ss)
        return NULL;
    while (fpart < lpart)
        ss[i++] = s1[fpart++];
    ss[i] = '\0';
    return ss;
}

// int in_set(int c, char const *set)
// {
//     int i = 0;
//     while (set[i])
//     {
//         if (c == set[i])
//             return (1);
//         i++;
//     }
//     return (0);
// }

// char *ft_strtrim(char const *s1, char const *set)
// {
//     char *ptr;
//     size_t fpart;
//     size_t lpart;
//     size_t i;

//     fpart = 0;
//     lpart = ft_strlen(s1);
//     i = 0;
//     if (!s1)
//         return NULL;
//     if (!set)
//         return (ft_strdup(s1));
//     while (s1[i] && in_set(s1[fpart], set))
//         fpart++;
//     while (in_set(s1[lpart - 1], set) && lpart > fpart)
//         lpart--;
//     ptr = malloc(sizeof(char) * (lpart - fpart + 1));
//     if (!ptr)
//         return (NULL);
//     while (lpart > fpart)
//         ptr[i++] = s1[fpart++];
//     ptr[i] = '\0';
//     return (ptr);
// }

// #include <stdio.h>
// int main()
// {
//     char const *ss = "bcaabcamineabbca";
//     char const *set = "abc";
//     printf ("%s", ft_strtrim(ss,set));
// }