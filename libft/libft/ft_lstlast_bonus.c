/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:18:15 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 02:40:59 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*str;

// 	str = ft_lstnew("ee");
// 	str->next = ft_lstnew("aa");
// 	str->next->next = ft_lstnew("ss");
// 	str->next->next->next = ft_lstnew("dd");
// 	printf("%s \n", ft_lstlast(str)->content);
// }
