/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 21:41:51 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 14:54:15 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

/* converts an int to its char representation */

static int	ft_find_amount_of_digits_pf(int n)
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

char	*ft_itoa_printf(int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_digits_pf(n) + 1));
	if (!str)
		return (NULL);
	i = ft_find_amount_of_digits_pf(n);
	str[i] = '\0';
	i--;
	if (n < 0)
		n *= -1;
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
