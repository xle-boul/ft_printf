/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:46:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/08 17:00:30 by xle-boul         ###   ########.fr       */
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
	int		n = 1232;
	
	ft_printf("\n%d", ft_printf("% +-.4s - %015.3d$", "trucmachin", n));
	printf("\n------------------------------\n");
	printf("\n%d", printf("% +-.4s - %015.3d$", "trucmachin", n));
	return (0);
}
