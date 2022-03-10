/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:34:12 by xle-boul          #+#    #+#             */
/*   Updated: 2022/03/06 23:43:19 by xle-boul         ###   ########.fr       */
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
