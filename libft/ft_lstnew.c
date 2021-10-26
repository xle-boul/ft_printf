/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:49:36 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/26 16:35:19 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* allocates memory and returns a new element */

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = ((char *)content);
	new_element->next = NULL;
	return (new_element);
}

/*
int main()
{
	t_list	*element;

	char content[] = "testessai123";
	element = ft_lstnew(content);
	printf("%s\n", (char *)element->content);
	free(element);
	return 0;
}
*/