/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:46:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/09 23:50:10 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* receives the args and sends them in the hub. prints the string if no args */

int	ft_printf(const char *c, ...)
{
	va_list	args;
	t_tot	tot;

	tot.n = 0;
	va_start (args, c);
	ft_parse_string(c, args, &tot);
	va_end (args);
	return (tot.n);
}

int main()
{
	// char	n[] = "cacasurtondoigt";
	int	n;
	int	k;
	int	i;
	unsigned int	m;

									m = -484521;
	n = ft_printf("%-.4s +++ %X +++ %c$", "cacasurtondoigt", m, 'm');
	ft_printf("\n%d\n", n);
	while (n--)
		ft_printf("-");
	ft_printf("\n");
	k = printf("%-.4s +++ %X +++ %10c$", "cacasurtondoigt", m, 'm');
	ft_printf("\n%d\n", k);
	return (0);
}
