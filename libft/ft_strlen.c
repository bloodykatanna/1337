/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:53:57 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 02:50:41 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *aptx)
{
	int	i;

	i = 0;
	while (aptx[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main()
// {
//     const char *ss = "aptx4869";
//     printf("%zu",ft_strlen(ss));
// }