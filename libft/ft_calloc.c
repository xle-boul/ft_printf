/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:40:53 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 10:51:11 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	allocates memory of size size * nmemb.
	fills elements with 0 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	array = (char *)malloc(size * nmemb);
	if (!array)
		return (NULL);
	ft_bzero(array, size * nmemb);
	return (array);
}
