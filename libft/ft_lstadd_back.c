/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:40:42 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 10:51:50 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* adds an element at the end of the list */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst && !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp ->next = new;
	}
}
