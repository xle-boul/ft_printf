/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:46:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/26 14:47:21 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* receives the args and sends them in the hub. prints the string if no args */

int	ft_printf(const char *c, ...)
{
	va_list	args;
	t_tot	*tot;
	t_tot	tot_n;

	tot = &tot_n;
	tot->n = 0;
	va_start (args, c);
	ft_parse_string(c, args, tot);
	va_end (args);
	return (tot_n.n);
}

int main()
{
	char	n[] = "cacasurtondoigt";
	int		precision = 4;
	
	ft_printf("\n%d", ft_printf("%.10-13si\n", n));
	ft_printf("\n--------\n");
	printf("\n%d", printf("%4.8.-0123.0003si", n));
	return (0);
}
