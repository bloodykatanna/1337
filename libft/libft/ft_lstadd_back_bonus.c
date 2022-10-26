/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:54:10 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 02:41:14 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aptx;

	if (!*lst)
		*lst = new;
	else
	{
		aptx = ft_lstlast(*lst);
		aptx->next = new;
	}
}

/*
int	main(void)
{
	t_list	*s;

	s = ft_lstnew("amine");
	ft_lstadd_back(&s, ft_lstnew("zaghloul"));
	puts(s->content);
}*/
