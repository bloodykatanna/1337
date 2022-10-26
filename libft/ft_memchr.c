/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:56:32 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 03:05:10 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*aptx;
	char	cc;

	cc = (char) c;
	i = 0;
	aptx = (char *)s;
	while (i < n)
	{
		if (aptx[i] == cc)
			return (&aptx[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf ("%s", ft_memchr("amine", 'i', 10));
// }