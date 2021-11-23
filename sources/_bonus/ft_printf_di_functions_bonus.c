/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di_functions_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:10:04 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:41:54 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_di_001(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.ct < 0)
		ft_putchar_fd_print('-', 1, tot);
	if (flags.spaplus != 0 && d.ct >= 0)
		ft_spaplus(flags, d, flags.dot_num, tot);
	if (flags.dot == 1)
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_di(flags, d, tot);
}

void	ft_di_100_1m10(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.ct < 0)
		flags.number--;
	if (flags.spaplus != 0 && d.ct > 0)
		flags.number--;
	if (flags.zemin != -1)
	{
		ft_padding(1, d.i, (flags.number - d.len), tot);
		if (d.ct < 0)
			ft_putchar_fd_print('-', 1, tot);
		if (flags.spaplus != 0 && d.ct > 0)
			ft_spaplus(flags, d, d.i, tot);
	}
	else if (flags.zemin == -1)
	{
		if (flags.spaplus != 0 && d.ct > 0)
			ft_spaplus(flags, d, d.i, tot);
		if (d.ct < 0)
			ft_putchar_fd_print('-', 1, tot);
		ft_padding(0, d.i, (flags.number - d.len), tot);
	}
	ft_printf_di(flags, d, tot);
}

void	ft_di_110(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.ct < 0)
	{
		ft_putchar_fd_print('-', 1, tot);
		flags.number -= (d.len + 1);
	}
	else if (d.ct >= 0)
	{
		if (flags.spaplus != 0)
			flags.number = ft_spaplus(flags, d, flags.dot_num, tot);
		flags.number -= d.len;
	}
	ft_printf_di(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_di_111(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.ct < 0)
	{
		ft_putchar_fd_print('-', 1, tot);
		flags.number--;
	}
	else if (d.ct >= 0)
		flags.number = ft_spaplus(flags, d, flags.number, tot);
	if (flags.dot_num > d.len)
	{
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
		flags.number -= flags.dot_num;
	}
	else if (flags.dot_num <= d.len)
		flags.number -= d.len;
	ft_printf_di(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_di_101(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.ct < 0)
		flags.number--;
	else if (d.ct >= 0 && flags.spaplus != 0)
		flags.number--;
	if (flags.dot_num > d.len)
		ft_padding(1, d.i, (flags.number - flags.dot_num), tot);
	else if (flags.dot_num <= d.len)
		ft_padding(1, d.i, (flags.number - d.len), tot);
	if (d.ct < 0)
		ft_putchar_fd_print('-', 1, tot);
	else if (d.ct >= 0)
		ft_spaplus(flags, d, d.j, tot);
	ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_di(flags, d, tot);
}
