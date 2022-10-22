/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:08:46 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/18 14:38:47 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i = ft_strlen(s1) ;
    int j = 0;
    char *s2;
    s2 = malloc(sizeof(char) * i + 1);
    if (s2 == NULL)
        return (NULL);

    while (s1[j] != '\0')
    {
        s2[j] = s1[j];
        j++;
    }
    s2[j] = '\0';
    return (s2);
}

// #include <stdio.h>
// int main()
// {
//     printf("strdup    :%s",strdup("44 m//47"));
//     printf("\nft_strdup :%s",ft_strdup("44 m//47"));
// }