/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:34:12 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 10:53:40 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* points to the last element of a list */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	if (!lst->next)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
