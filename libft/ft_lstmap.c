/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:29:55 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 10:54:19 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copies a list and applies the pointed function to the new one */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_element;
	t_list	*new_element;

	if (!lst || !f || !del)
		return (NULL);
	first_element = ft_lstnew(f(lst->content));
	if (!first_element)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!new_element)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&first_element, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&first_element, new_element);
	}
	return (first_element);
}
