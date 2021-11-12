/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:10:04 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/11 00:21:27 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libprintf.h"

void	ft_p_001(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0 && d.ui > 0)
		ft_p_spaplus(flags, d, flags.dot_num, tot);
	if (flags.dot == 1)
	{
		ft_putstr_fd_print("0x", 1, 2, tot);
		flags.number -= 2;
		ft_p_padding(0, d.i, (flags.dot_num - d.len), tot);
	}
	ft_printf_p(flags, d, tot);
}

void	ft_p_100_1m10(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0 && d.ui > 0)
		flags.number--;
	if (flags.zemin != -1)
	{
		ft_p_padding(1, d.i, (flags.number - d.len), tot);
		if (flags.spaplus != 0 && d.ui > 0)
			ft_p_spaplus(flags, d, d.i, tot);
	}
	else if (flags.zemin == -1)
	{
		ft_putstr_fd_print("0x", 1, 2, tot);
		flags.number -= 2;
		if (flags.spaplus != 0 && d.ui > 0)
			ft_p_spaplus(flags, d, d.i, tot);
		ft_p_padding(0, d.i, (flags.number - d.len), tot);
	}
	ft_printf_p(flags, d, tot);
}

void	ft_p_110(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	ft_p_001(flags, d, tot);
	if (d.ui >= 0)
	{
		if (flags.spaplus != 0)
			flags.number--;
		flags.number -= d.len;
	}
	ft_p_padding(1, d.i, flags.number, tot);
}

void	ft_p_111(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.ui >= 0)
		flags.number = ft_p_spaplus(flags, d, flags.number, tot);
	if (flags.dot_num > d.len)
	{
		ft_putstr_fd_print("0x", 1, 2, tot);
		flags.number -= 2;
		ft_p_padding(0, d.i, (flags.dot_num - d.len), tot);
		flags.number -= flags.dot_num;
	}
	else if (flags.dot_num < d.len)
	{
		flags.number -= d.len;
		ft_putstr_fd_print("0x", 1, 2, tot);
		flags.number -= 2;
	}
	ft_printf_p(flags, d, tot);
	ft_p_padding(1, d.i, flags.number, tot);
}

void	ft_p_101(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	flags.number -= 2;
	if (d.ui < 0)
		flags.number--;
	else if (d.ui > 0 && flags.spaplus != 0)
		flags.number--;
	if (flags.dot_num > d.len)
		ft_p_padding(1, d.i, (flags.number - flags.dot_num), tot);
	else if (flags.dot_num <= d.len)
		ft_p_padding(1, d.i, (flags.number - d.len), tot);
	if (d.ui >= 0)
		ft_p_spaplus(flags, d, d.j, tot);
	ft_putstr_fd_print("0x", 1, 2, tot);
	ft_p_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_p(flags, d, tot);
}
