/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:12:13 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/17 15:44:49 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	compares the n first elements of a string.
	returns 0 if identical
	returns the difference between ascii values otherwise */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n == 0 || !s1 || !s2)
		return (0);
	while (i++ < n - 1 && *a == *b && *a != '\0' && *b != '\0')
	{
		a++;
		b++;
	}
	return (*a - *b);
}

/*
int main()
{
	char s1[] = "abcdefgh";
	char s2[] = "abcdwxyz";

	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s1, s2, 4));
	
	return (0);
}
*/
