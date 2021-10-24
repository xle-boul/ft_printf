/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 22:04:30 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/03 23:44:14 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	copies the n first elements of source to destination.
	Returns a pointer to the first element of destination.
	Allows overlap */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;

	d = (char *)dest;
	if (!d && !src)
		return (NULL);
	while (n--)
		*d++ = *((char *)src++);
	return (dest);
}
