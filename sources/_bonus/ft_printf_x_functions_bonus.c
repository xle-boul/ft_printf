/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_functions_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:10:04 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:42:03 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_x_001(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.dot == 1)
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	if ((unsigned int)d.lui != 0
		&& flags.square == 1 && flags.param == 'x')
		ft_putstr_fd_print("0x", 1, 2, tot);
	if ((unsigned int)d.lui != 0
		&& flags.square == 1 && flags.param == 'X')
		ft_putstr_fd_print("0X", 1, 2, tot);
	ft_printf_x(flags, d, tot);
}

void	ft_x_100_1m10(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.zemin != -1)
	{
		if (flags.number == 1)
			flags.number -= 2;
		ft_padding(1, d.i, (flags.number - d.len), tot);
	}
	else if (flags.zemin == -1)
	{
		flags.number = ft_square(flags, d, flags.number, tot);
		ft_padding(0, d.i, (flags.number - d.len), tot);
	}
	if (flags.zemin != -1)
		ft_square(flags, d, flags.number, tot);
	ft_printf_x(flags, d, tot);
}

void	ft_x_110(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	flags.number -= d.len;
	if (d.lui != 0 && flags.square == 1)
		flags.number = ft_square(flags, d, flags.number, tot);
	ft_printf_x(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_x_111(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.dot_num > d.len)
	{
		if (flags.square == 1)
			flags.number = ft_square(flags, d, flags.number, tot);
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
		flags.number -= flags.dot_num;
	}
	else if (flags.dot_num <= d.len)
	{
		if (flags.square == 1)
			flags.number = ft_square(flags, d, flags.number, tot);
		flags.number -= d.len;
	}
	ft_printf_x(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_x_101(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.lui != 0 && flags.square == 1)
		flags.number -= 2;
	if (flags.dot_num > d.len)
		ft_padding(1, d.i, (flags.number - flags.dot_num), tot);
	else if (flags.dot_num <= d.len)
		ft_padding(1, d.i, (flags.number - d.len), tot);
	ft_square(flags, d, flags.number, tot);
	ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_x(flags, d, tot);
}
