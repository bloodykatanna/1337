/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:55:09 by azaghlou          #+#    #+#             */
/*   Updated: 2022/04/06 10:47:18 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i <= size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}	
	return (count);
}
