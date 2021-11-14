/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:10:04 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 15:53:28 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libprintf.h"

void	ft_x_001(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.dot == 1)
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_x(flags, d, tot);
}

void	ft_x_100_1m10(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.zemin != -1)
		ft_padding(1, d.i, (flags.number - d.len), tot);
	else if (flags.zemin == -1)
		ft_padding(0, d.i, (flags.number - d.len), tot);
	ft_printf_x(flags, d, tot);
}

void	ft_x_110(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	ft_x_001(flags, d, tot);
	flags.number -= d.len;
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_x_111(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.dot_num > d.len)
	{
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
		flags.number -= flags.dot_num;
	}
	else if (flags.dot_num <= d.len)
		flags.number -= d.len;
	ft_printf_x(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_x_101(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0)
		flags.number--;
	if (flags.dot_num > d.len)
		ft_padding(1, d.i, (flags.number - flags.dot_num), tot);
	else if (flags.dot_num <= d.len)
		ft_padding(1, d.i, (flags.number - d.len), tot);
	ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_x(flags, d, tot);
}
