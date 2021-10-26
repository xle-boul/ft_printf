/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:48:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/26 13:30:01 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_s(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	c.i = 0;
	c.str = va_arg(args, char *);
	printf("%d, %d\n", flags.number, flags.high_num);
	if (flags.number > 0 && flags.dot == 1 && flags.high_num != 0)
	{
		while (c.i < (int)ft_strlen(c.str) && c.i < flags.number)
		{
			ft_putchar_fd_print(c.str[c.i], 1, tot);
			c.i++;
		}
		while (c.i < flags.number)
		{
			ft_putchar_fd_print(' ', 1, tot);
			c.i++;
		}
	}
}
