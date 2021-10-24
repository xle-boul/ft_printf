/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:48:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/23 23:45:26 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_s(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	c.i = 0;
	c.str = va_arg(args, char *);
	if (flags.dot == 1 && flags.number > 0)
	{
		while (c.i < flags.number)
		{
			ft_putchar_fd_print(c.str[c.i], 1, tot);
			c.i++;
		}
	}
}

void	ft_printf_s_double(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	c.i = 0;
	c.count = va_arg(args, int);
	printf("args = %d\n", c.count);
	c.str = va_arg(args, char *);
	if (flags.dot == 1 && flags.star == 1)
	{
		while (c.i < c.count)
		{
			ft_putchar_fd_print(c.str[c.i], 1, tot);
			c.i++;
		}
	}
}
