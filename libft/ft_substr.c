/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:11:36 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/19 12:13:03 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ss;
    size_t i;
    i = 0;
    if (!s)
        return 0;
    ss = malloc (sizeof (char) * (len + 1) );
    if (!ss)
        return 0;
    if (start < ft_strlen(s))
    {
        while (i < len)
        {
            ss[i] = s[start + i];
            i++;
        }
    }
    ss[i] = '\0';
    return ss;
}
