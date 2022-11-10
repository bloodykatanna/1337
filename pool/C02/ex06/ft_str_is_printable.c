/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:07:41 by azaghlou          #+#    #+#             */
/*   Updated: 2022/04/04 06:23:34 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		if (!(str[i] <= 126 && str[i] >= 32))
		{
			return (0);
		}
		i++;
	}
	return (1);
}