/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 23:35:53 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/11 23:07:41 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	concatenates string source after the end of string dest
	ensures the new string is finished with '\0'
	returns the size of the new string */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j + i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
int main()
{
	char s[] = "blabla";
	char d[50] = "ggwp";

	ft_strlcat(d, s, 19);
	printf("%s\n", d);
	return (0);
}
*/
