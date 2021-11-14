/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:42:03 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/11 11:14:13 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* sets the n first elements of a string to a given char */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n)
	{
		*str = (const char)c;
		str++;
		n--;
	}
	return (s);
}

/*
int main()
{
	char s[] = "blablabla";

	ft_memset(s, 'A', 5);
	printf("%s\n", s);
	return 0;
}
*/