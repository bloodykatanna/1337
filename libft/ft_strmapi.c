/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:52:18 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/18 20:42:35 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int j;
    size_t i;
    char *str;

    j = 0;
    i = ft_strlen(s);
    str = malloc(sizeof(char) * i + 1);
    if (!str)
        return NULL;
    while (s[j])
    {
        str[j] = f(j, s[j]);
        j++;
    }
    str[j] = '\0';
    return str;
}

// char fss(unsigned int i, char s)
// {
//     (void) i;
//     if (s == 'a')
//         s = 'A';
//     return s;
// }

// #include <stdio.h>
// int main()
// {
//     char *ss = "amineaminezaghloulzaghloulaaconan";
//     printf("%s", ft_strmapi(ss, fss));
// }