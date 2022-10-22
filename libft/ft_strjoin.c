/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:47:37 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/15 19:58:30 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ss;
    int i;
    int j;
    i = 0;
    j = 0;
    // if (!s1 || !s2)
    //     return 0;
    ss = malloc (sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!ss)
        return 0;
    while (s1[i])
    {
        ss[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        ss[i] = s2[j];
        j++;
        i++;
    }
    ss[i] = '\0';
    return ss;
}