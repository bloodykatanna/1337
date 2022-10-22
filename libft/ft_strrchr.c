/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:02:39 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/20 11:40:58 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    char *ap;
    char tx;
    ap = (char *)s;
    tx = (char)c;
    i = ft_strlen(ap);
    if (ap[0] == '\0' )
        return 0;
    while (ap[i] != ap[0] && ap[i] != tx)
        i--;
    if (ap[i] == tx)
        return (&ap[i]);
    return (0);
}