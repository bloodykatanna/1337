/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:00:24 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 02:48:22 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	*nn;

	i = 0;
	ss = (unsigned char *)s1;
	nn = (unsigned char *)s2;
	while (i < n)
	{
		if (ss[i] != nn[i])
			return (ss[i] - nn[i]);
		i++;
	}
	return (0);
}
