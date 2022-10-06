/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:41:18 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/06 17:28:51 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t j = count*size;
    
    if (size == 0)
        return (0);
    
    char *str;
    str = (char *)malloc(count * size);
    
    if (count != '\0' || size != '\0')
        return(0);
    if (ft_strlen(str) < count * size )
        return(0);
    if (str == NULL)
        return (NULL);
    
    ft_bzero(str, j);
    return(ft_strlen(str));
}