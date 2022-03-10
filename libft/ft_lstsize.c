/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:57:29 by xle-boul          #+#    #+#             */
/*   Updated: 2022/03/03 20:05:05 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* finds out how many elements there are in the list */

int	ft_lstsize(t_list *lst)
{
	int		i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
