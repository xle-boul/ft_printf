/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 21:41:51 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/19 12:09:49 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* converts an int to its char representation */

static int	ft_find_amount_of_digits(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_digits(n) + 1));
	if (!str)
		return (NULL);
	i = ft_find_amount_of_digits(n);
	str[i] = '\0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	nb = n;
	while (nb > 0)
	{
		str[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (str);
}

/*
int main()
{
	int		i = -2147483648;
	char	*s = ft_itoa(i);
	
	printf("%s\n", s);
	free(s);
	return (0);
}
*/
