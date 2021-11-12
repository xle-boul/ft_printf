/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:16:44 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/12 21:10:44 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	main(void)
{
	int				n;
	int				k;
	unsigned int	m;

	m = -484521;
	n = ft_printf("%.4s +++ %-20.00015p +++ %-20.15X +++ %-10c$",
			"cacasurtondoigt", &m, m, 'm');
	ft_printf("\n%d\n", n);
	while (n--)
		ft_printf("-");
	ft_printf("\n");
	k = printf("%.4s +++ %-20p +++ %-20.15X +++ %-10c$",
			"cacasurtondoigt", &m, m, 'm');
	ft_printf("\n%d\n", k);
	return (0);
}
