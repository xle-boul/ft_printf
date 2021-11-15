/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:32:58 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 11:47:35 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libprintf.h"

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

int	ft_spaplus(t_flags flags, t_char d, int i, t_tot *tot)
{
	if (d.ui > 0)
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
