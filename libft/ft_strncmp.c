/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:07:51 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/04 15:13:13 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

     int ft_strncmp(const char *s1, const char *s2, size_t n)
 
 {
        size_t i = 0;
        while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
        {
            if((unsigned char)s1[i] != (unsigned char)s2[i])
            {
                return ((unsigned char)s1[i] - (unsigned char)s2[i]);
            }
            i++;
        }
        return (0);
     } 


