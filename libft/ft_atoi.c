/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:21:38 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/21 12:49:49 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAX_LONGLONG 9223372036854775807

typedef struct s_atoi
{
	int						i;	
	unsigned long long		lln;
	char					*str_bis;
}				t_atoi;

/* converts a string to corresponding integer */

static char	*ft_trim_string(const char *str)
{
	if (!str)
		return (0);
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\r' || *str == '\f' || *str == ' ')
		str++;
	return ((char *)str);
}

int	ft_atoi(const char *str)
{
	t_atoi	n;

	n.i = 1;
	n.lln = 0;
	n.str_bis = ft_trim_string(str);
	if (!str)
		return (0);
	if (*n.str_bis == '-')
		n.i = -1;
	if (*n.str_bis == '+' || *n.str_bis == '-')
		n.str_bis++;
	while (48 <= *n.str_bis && *n.str_bis <= 57)
	{	
		n.lln = n.lln * 10 + (*n.str_bis - 48);
		if (n.lln > MAX_LONGLONG && n.i == 1)
			return (-1);
		else if (n.lln > MAX_LONGLONG && n.i == -1)
			return (0);
		n.str_bis++;
	}
	return ((int)n.lln * n.i);
}

/*
int main()
{
	char s[] = "-922337208908905032";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
	return 0;
}
*/
