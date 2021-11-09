/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/08 16:38:59 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

// simple basic printing function for types i and d

void	ft_printf_di(t_flags flags, t_tot *tot)
{
	int	i;

	i = 0;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_print(flags.str[i], 1, tot);
		i++;
	}
}

// redirects to the proper printing channel depending on the flags

void	ft_di_hub(t_flags flags, t_char d, t_tot *tot)
{
	if (!flags.str)
		return ;
	if (flags.number == 0 && flags.spaplus == 0 && flags.zemin == 0)
	{
		if (d.count < 0)
			ft_putchar_fd_print('-', 1, tot);
		ft_printf_di(flags, tot);
	}
	else if (flags.spaplus != 0 && flags.dot == 0 && flags.zemin == 0)
	{
		flags.number = ft_di_spaplus(flags, d, tot);
		ft_di_number(flags, d, tot);
	}
	else if ((flags.zemin != 0 && flags.dot == 0)
		|| (flags.zemin != 0 && flags.dot == 1 && flags.dot_num < d.len))
		ft_di_zemin(flags, d, tot);
	else if (flags.dot != 0)
	{
		if (flags.dot_num > d.len && flags.zemin != 1)
			ft_di_precision_1(flags, d, tot);
		else if (flags.dot_num > d.len && flags.zemin == 1)
			ft_di_precision_2(flags, d, tot);
	}
	free(flags.str);
}

// initiate the variables for the following functions

void	ft_di_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.count = va_arg(args, int);
	flags.str = ft_itoa_printf(d.count);
	d.len = (int)ft_strlen(flags.str);
	ft_di_hub(flags, d, tot);
}
