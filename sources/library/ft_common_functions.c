/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:32:58 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 14:54:15 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

// fonction to add padding according to precision or width

void	ft_padding(int s, int start, int stop, t_tot *tot)
{
	if (start >= stop)
		return ;
	if (s == 1)
	{
		while (start < stop)
		{
			ft_putchar_fd_print(' ', 1, tot);
			start++;
		}
	}
	if (s == 0)
	{
		while (start < stop)
		{
			ft_putchar_fd_print('0', 1, tot);
			start++;
		}
	}
}

// fuction to deal with the plus and space flags

int	ft_spaplus(t_flags flags, t_char d, int i, t_tot *tot)
{
	if (d.ui > 0 || d.ct > 0)
	{
		if (flags.spaplus == -1)
		{
			ft_putchar_fd_print(' ', 1, tot);
			return (i - 1);
		}
		else if (flags.spaplus == 1)
		{
			ft_putchar_fd_print('+', 1, tot);
			return (i - 1);
		}
	}
	return (i);
}

// function to deal with square flag

int	ft_square(t_flags flags, t_char d, int i, t_tot *tot)
{
	if (d.lui != 0 && flags.square == 1)
	{
		if (flags.param == 'x')
		{
			ft_putstr_fd_print("0x", 1, 2, tot);
			return (i - 2);
		}
		else if (flags.param == 'X')
		{
			ft_putstr_fd_print("0X", 1, 2, tot);
			return (i - 2);
		}
	}
	return (i);
}
