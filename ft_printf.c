/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:46:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/23 23:48:07 by xle-boul         ###   ########.fr       */
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
	printf("\n%d\n", tot->n);
	return (tot_n.n);
}

int main()
{
	char	n[] = "cacasurtondoigt";
	int		precision = 4;
	
	ft_printf("1. %34x\n2. %0.46X\n3. %655c\n4. %.10s\n5. %%\n6. %p", 15, 1533, '^', n, 'x', &n);
	return (0);
}
