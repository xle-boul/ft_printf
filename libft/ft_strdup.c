/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:37:22 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/19 12:11:01 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	duplicates a string into a new one, using malloc to assign memory */

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main()
{
	char	s[] = "bl";
	char	*str;
	int		i = 0;

	str = ft_strdup((char *)s);
	printf("%d\n%s\n%s\n", strcmp(s, str), s, str);
	while (str[i] != '\0')
	{
		printf("%c &str[i] = %p, &s[i] = %p\n", str[i], &str[i], &s[i]);
		i++;
	}
	return (0);
}
*/
