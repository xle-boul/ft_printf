/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_hub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/09 21:08:13 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libprintf.h"

// simple basic printing function for types i and d

void	ft_printf_di(t_flags flags, t_char d, t_tot *tot)
{
	int	i;

	i = 0;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_print(flags.str[i], 1, tot);
		i++;
	}
}

// defines if flags 0 or + are used and prints accordingly

int	ft_di_spaplus(t_flags flags, t_char d, int i, t_tot *tot)
{
	if (d.ct > 0)
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

// takes care of the padding caused by flags or precision

void	ft_di_padding(int s, int start, int stop, t_tot *tot)
{
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

// redirects to the proper printing channel depending on the flags

void	ft_di_hub(t_flags flags, t_char d, t_tot *tot)
{
	if ((flags.number == 0 && flags.zemin == 0 && flags.dot == 0)
		|| (flags.number == 0 && flags.zemin != 0 && flags.dot == 0))
		ft_di_001(flags, d, tot);
	else if ((flags.number == 0 && flags.zemin == 0 && flags.dot == 1)
		|| (flags.number != 0 && flags.zemin == 1
			&& flags.dot == 1 && flags.dot_num > flags.number))
		ft_di_001(flags, d, tot);
	else if ((flags.number != 0 && flags.zemin == 0 && flags.dot == 0)
		|| (flags.number != 0 && flags.zemin == -1 && flags.dot == 0))
		ft_di_100_1m10(flags, d, tot);
	else if (flags.number != 0 && flags.zemin == 1 && flags.dot == 0)
		ft_di_110(flags, d, tot);
	else if (flags.number != 0 && flags.zemin == 1 && flags.dot == 1)
		ft_di_111(flags, d, tot);
	else if (flags.number != 0 && flags.zemin != 1 && flags.dot == 1)
		ft_di_101(flags, d, tot);
}

// initiates the variables for the following functions

void	ft_di_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.ct = va_arg(args, int);
	flags.str = ft_itoa_printf(d.ct);
	d.len = (int)ft_strlen(flags.str);
	ft_di_hub(flags, d, tot);
	free (flags.str);
}
