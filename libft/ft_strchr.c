/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:29:25 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/24 15:15:13 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		else
			i++;
	}
	if (cc == 0)
		return ((char *)&s[i]);
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     const char *str = "amine";
//     int x = 'm' ;
//     printf("strchr :%s", strchr(str, x ));
//     printf("\nft_strchr :%s", ft_strchr(str, x ));
// }