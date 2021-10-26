/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:48:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/25 15:04:59 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_s(t_flags flags, va_list args, t_tot *tot, char *str)
{
	t_char	c;

	c.i = 0;
	c.str = va_arg(args, char *);
	printf("%d, %d\n", flags.number, flags.high_num);
	if (flags.number > 0 && flags.dot == 0)
	{
		while (flags.number < (int)ft_strlen(str))
		{
			ft_putchar_fd_print(str[c.i], 1, tot);
			c.i++;
		}
		while (c.i <= flags.number)
		{
			ft_putchar_fd_print(' ', 1, tot);
			c.i++;
		}
	}
}
