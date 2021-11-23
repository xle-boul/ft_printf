/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_hub_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:41:45 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

// simple basic printing function for types i and d

void	ft_printf_di(t_flags flags, t_char d, t_tot *tot)
{
	int	i;

	i = 0;
	if (flags.dot == 1 && d.ct == 0)
		return ;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_print(flags.str[i], 1, tot);
		i++;
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
	else if (flags.number == 0 && flags.zemin == -1 && flags.dot == 1)
		ft_di_001(flags, d, tot);
	else if ((flags.number != 0 && flags.zemin == 0 && flags.dot == 0)
		|| (flags.number != 0 && flags.zemin == -1 && flags.dot == 0))
		ft_di_100_1m10(flags, d, tot);
	else if (flags.number == 0 && flags.zemin == 1 && flags.dot == 1)
		ft_di_111(flags, d, tot);
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
	if (d.ct == 0 && flags.dot == 1)
		d.len = 0;
	else
		d.len = (int)ft_strlen(flags.str);
	ft_di_hub(flags, d, tot);
	free (flags.str);
}
