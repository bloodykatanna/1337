/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:41:58 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 02:39:32 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*t;

	i = 0;
	t = lst;
	while (t)
	{
		t = t->next;
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	int		i;
	t_list	*s;
	t_list	*t;
	char	ss;
	t_list	*str;

	ss = 'a';
	i = 0;
	s = ft_lstnew("amine");
	t = s;
	str = ft_lstnew("ee");
	str->next = ft_lstnew("aa");
	str->next->next = ft_lstnew("ss");
	str->next->next->next = ft_lstnew("dd");
	printf("%d", ft_lstsize(str));
}*/

// while (i < 5)
// {
//     t->content = ft_lstnew(ss);
//     t = t->next;
//     ss = ss + 1;
//     i++;
// }
