/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:51:00 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 02:57:49 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cnt(char const *str, char x)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != x)
		{
			count++;
			while (str[i] && str[i] != x)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	int	ft_len(char const *ss, char cc, int i)
{
	int	j;

	j = 0;
	while (ss[i] && ss[i] != cc)
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**aptx;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	aptx = (char **)malloc(sizeof(char *) * (ft_cnt(s, c) + 1));
	if (!aptx)
		return (NULL);
	while (i < ft_cnt(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		aptx[i] = ft_substr(s, j, ft_len(s, c, j));
		i++;
		j += ft_len(s, c, j);
	}
	aptx[i] = 0;
	return (aptx);
}

// int main()
// {
// 	char *s = "ftgrtgg   bg tt djdj   schlussfolgerung   t   .";
// 	printf("%d",ft_cnt(s, ' '));
// 	char **array = ft_split(s, ' ');
// 	printf("%s \n", array[0]);
// 	printf("%s \n", array[1]);
// 	printf("%s \n", array[2]);
// }

// int main()
// {
//     printf(":%d:\n", ft_cnt("amine rojola ", ' '));
// }
