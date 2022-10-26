/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:55:46 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/24 12:41:38 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ap;
	char	*tx;

	ap = (char *)dst;
	tx = (char *)src;
	if (dst > src)
	{
		while (len != 0)
		{
			len--;
			ap[len] = tx[len];
		}
	}
	else
	{
		ft_memcpy(ap, tx, len);
	}
	return (dst);
}

// #include <stdio.h>

// int main()
// {
//     char s[] = "abcdefg";
//     printf("%s",ft_memmove(s+1,s, 2));
// }