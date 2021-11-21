/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:46:59 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/17 16:23:44 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	find the first occurence of the string little in the big one
	returns the remaining part of the string if successful
	returns NULL if not */

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	while (len-- >= ft_strlen(little) && *big != '\0')
	{
		if (*big == *little && ft_strncmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}

/*
int main()
{
	char s[] = "salut tu vas bien";
	char c[] = "ut";
	int a = 3;

	printf("%s\n", strnstr(s, c, a));
	printf("%s\n", ft_strnstr(s, c, a));
	return 0;
}
*/
