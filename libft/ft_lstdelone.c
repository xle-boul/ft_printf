/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:03:59 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 10:52:44 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* deletes an element from the list */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst && !del)
		return ;
	del(lst->content);
	free(lst);
}
