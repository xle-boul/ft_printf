/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:36:11 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/29 11:26:44 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_test_di(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.number > 0 && flags.dot == 0)
	{
		if (flags.spaplus != 0)
		{
			if (flags.spaplus == -1)
				ft_putchar_fd_print(' ', 1, tot);
			else if (flags.spaplus == 1)
				ft_putchar_fd_print('+', 1, tot);
			flags.number -= 1;
		}
		if (flags.zemin == 1)
			ft_printf_di(flags, d.count, tot);
		while (d.i + (int)ft_strlen(flags.str) < flags.number)
		{
			if (flags.zemin == 0)
				ft_putchar_fd_print(' ', 1, tot);
			else if (flags.zemin == -1)
				ft_putchar_fd_print('0', 1, tot);
			else if (flags.zemin == 1)
				ft_putchar_fd_print(' ', 1, tot);
			d.i++;
		}
		if (flags.zemin != 1)
			ft_printf_di(flags, d.count, tot);
	}
}
