/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 21:41:51 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 14:54:15 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

/* converts an int to its char representation */

static int	ft_find_amount_of_dgts_pf_x(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*ft_itoa_printf_x(unsigned int n, t_char d, t_flags flags)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_dgts_pf_x(n) + 1));
	if (!str)
		return (NULL);
	d.j = ft_find_amount_of_dgts_pf_x(n);
	str[d.j] = '\0';
	d.j--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		if ((n % 16) < 10)
			str[d.j] = (n % 16) + 48;
		else if ((n % 16) >= 10 && flags.param == 'x')
			str[d.j] = (n % 16) + 87;
		else if ((n % 16) >= 10 && flags.param == 'X')
			str[d.j] = (n % 16) + 55;
		n /= 16;
		d.j--;
	}
	return (str);
}

static int	ft_find_amount_of_dgts_pf_p(unsigned long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*ft_itoa_printf_p(unsigned long int n, t_char d, t_flags flags)
{
	char			*str;

	str = (char *)malloc(sizeof(char) * (ft_find_amount_of_dgts_pf_p(n) + 1));
	if (!str)
		return (NULL);
	d.j = ft_find_amount_of_dgts_pf_p(n);
	str[d.j] = '\0';
	d.j--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		if ((n % 16) < 10)
			str[d.j] = (n % 16) + 48;
		else if ((n % 16) >= 10 && flags.param == 'p')
			str[d.j] = (n % 16) + 87;
		n /= 16;
		d.j--;
	}
	return (str);
}
