/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:09:07 by azaghlou          #+#    #+#             */
/*   Updated: 2022/10/25 00:02:58 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ap;

	ap = (t_list *)malloc(sizeof(t_list));
	if (!ap)
		return (NULL);
	ap->content = content;
	ap->next = NULL;
	return (ap);
}
// #include <stdio.h>
// int main()
// {
//     t_list *s;
//     s->content = "amine";
//     printf("%s", ft_lstnew(s->content));
// }