/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:36:11 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/07 13:13:46y xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_di_number(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.number <= (int)ft_strlen(flags.str))
		ft_printf_di(flags, tot);
	else if (flags.number > (int)ft_strlen(flags.str))
	{
		if (d.count < 0)
		{
			while ((int)ft_strlen(flags.str) + d.i + 1 < flags.number)
			{
				ft_putchar_fd_print(' ', 1, tot);
				d.i++;
			}
			ft_putchar_fd_print('-', 1, tot);
		}
		else if (d.count >= 0)
		{
			while ((int)ft_strlen(flags.str) + d.i < flags.number)
			{
				ft_putchar_fd_print(' ', 1, tot);
				d.i++;
			}
		}
		ft_printf_di(flags, tot);
	}
}

int	ft_di_spaplus(t_flags flags, t_char d, t_tot *tot)
{
	if (flags.spaplus != 0 && d.count > 0)
	{
		if (flags.spaplus == -1)
			ft_putchar_fd_print(' ', 1, tot);
		else if (flags.spaplus == 1)
			ft_putchar_fd_print('+', 1, tot);
		return (flags.number - 1);
	}
	return (flags.number);
}

void	ft_di_zemin(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.count >= 0)
		flags.number = ft_di_spaplus(flags, d, tot);
	else if (d.count < 0)
	{
		ft_putchar_fd_print('-', 1, tot);
		flags.number--;
	}
	if (flags.zemin == 1)
		ft_printf_di(flags, tot);
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
		ft_printf_di(flags, tot);
}

void	ft_di_precision_1(t_flags flags, t_char d, t_tot *tot)
{
	if (flags.dot_num > d.len)
	{
		if (d.count > 0)
		{
			while (flags.number-- > flags.dot_num)
				ft_putchar_fd_print(' ', 1, tot);
		}
		else if (d.count < 0)
		{
			while (flags.number-- > flags.dot_num + 1)
				ft_putchar_fd_print(' ', 1, tot);
			ft_putchar_fd_print('-', 1, tot);
			flags.number--;
		}
		while (flags.number-- >= d.len)
			ft_putchar_fd_print('0', 1, tot);
		ft_printf_di(flags, tot);
	}
}

void	ft_di_precision_2(t_flags flags, t_char d, t_tot *tot)
{
	return ;
}
