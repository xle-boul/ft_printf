/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_hub_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:42:09 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

// simple basic printing function for types i and d

void	ft_printf_x(t_flags flags, t_char d, t_tot *tot)
{
	int	i;

	i = 0;
	if (flags.dot == 1 && d.lui == 0)
		return ;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_print(flags.str[i], 1, tot);
		i++;
	}
}

void	ft_x_hub(t_flags flags, t_char d, t_tot *tot)
{
	if ((flags.number == 0 && flags.zemin == 0 && flags.dot == 0)
		|| (flags.number == 0 && flags.zemin != 0 && flags.dot == 0))
		ft_x_001(flags, d, tot);
	else if ((flags.number == 0 && flags.zemin == 0 && flags.dot == 1)
		|| (flags.number != 0 && flags.zemin == 1
			&& flags.dot == 1 && flags.dot_num > flags.number))
		ft_x_001(flags, d, tot);
	else if (flags.number == 0 && flags.zemin == -1 && flags.dot == 1)
		ft_x_101(flags, d, tot);
	else if ((flags.number != 0 && flags.zemin == 0 && flags.dot == 0)
		|| (flags.number != 0 && flags.zemin == -1 && flags.dot == 0))
		ft_x_100_1m10(flags, d, tot);
	else if (flags.number == 0 && flags.zemin == 1 && flags.dot == 1)
		ft_x_111(flags, d, tot);
	else if (flags.number != 0 && flags.zemin == 1 && flags.dot == 0)
		ft_x_110(flags, d, tot);
	else if (flags.number != 0 && flags.zemin == 1 && flags.dot == 1)
		ft_x_111(flags, d, tot);
	else if (flags.number != 0 && flags.zemin != 1 && flags.dot == 1)
		ft_x_101(flags, d, tot);
}

// initiates the variables for the following functions

void	ft_x_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.lui = va_arg(args, unsigned long int);
	flags.str = ft_itoa_printf_x(d.lui, d, flags);
	if (d.lui == 0 && flags.dot == 1)
		d.len = 0;
	else
		d.len = (int)ft_strlen(flags.str);
	ft_x_hub(flags, d, tot);
	free (flags.str);
}
