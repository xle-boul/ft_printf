/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 21:41:51 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 11:47:58 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libprintf.h"

/* converts an int to its char representation */

static int	ft_find_amount_of_digits_pf_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_printf_u(unsigned int n)
{
	char			*str;
	int				i;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_digits_pf_u(n) + 1));
	if (!str)
		return (NULL);
	i = ft_find_amount_of_digits_pf_u(n);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (str);
}

// int main()
// {
// 	int		i = -2147483648;
// 	char	*s = ft_itoa(i);

// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
