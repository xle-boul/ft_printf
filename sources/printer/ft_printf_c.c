/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 13:32:04 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libprintf.h"

void	ft_printf_c(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	c.i = 0;
	if (flags.param == '%')
	{
		ft_putchar_fd_print('%', 1, tot);
		return ;
	}
	c.c = va_arg(args, int);
	if (flags.number == 0)
		ft_putchar_fd_print(c.c, 1, tot);
	else if (flags.number != 0 && flags.zemin != 1)
	{
		while (c.i++ < flags.number - 1)
			ft_putchar_fd_print(' ', 1, tot);
		ft_putchar_fd_print(c.c, 1, tot);
	}
	else if (flags.number != 0 && flags.zemin == 1)
	{
		ft_putchar_fd_print(c.c, 1, tot);
		while (c.i++ < flags.number - 1)
			ft_putchar_fd_print(' ', 1, tot);
	}
}
