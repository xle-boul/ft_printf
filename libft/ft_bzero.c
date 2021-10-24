/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 21:59:40 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/03 23:34:47 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* fills the first n elements of a string with '\0' */

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	char	x;

	str = (char *)s;
	x = '\0';
	while (n)
	{
		*str = x;
		str++;
		n--;
	}
}
