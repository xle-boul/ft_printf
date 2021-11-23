/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p_functions_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:10:04 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:41:57 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_p_001(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0 && d.ui > 0)
		ft_spaplus(flags, d, flags.dot_num, tot);
	ft_putstr_fd_print("0x", 1, 2, tot);
	ft_printf_p(flags, tot);
}

void	ft_p_100_1m10(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0 && d.ui > 0)
		flags.number--;
	if (flags.zemin != -1)
	{
		flags.number -= 2;
		ft_padding(1, d.i, (flags.number - d.len), tot);
		if (flags.spaplus != 0 && d.ui > 0)
			flags.number = ft_spaplus(flags, d, d.i, tot);
	}
	else if (flags.zemin == -1)
	{
		ft_putstr_fd_print("0x", 1, 2, tot);
		flags.number -= 2;
		if (flags.spaplus != 0 && d.ui > 0)
			flags.number = ft_spaplus(flags, d, d.i, tot);
		ft_padding(0, d.i, (flags.number - d.len), tot);
	}
	if (flags.zemin != -1)
		ft_putstr_fd_print("0x", 1, 2, tot);
	ft_printf_p(flags, tot);
}

void	ft_p_110(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	flags.number -= d.len;
	if (d.lui != 0 && flags.spaplus == 1)
		flags.number = ft_spaplus(flags, d, flags.number, tot);
	ft_putstr_fd_print("0x", 1, 2, tot);
	flags.number -= 2;
	ft_printf_x(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}
