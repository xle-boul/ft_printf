/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_hub_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:42:07 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

// simple basic printing function for types i and d

void	ft_printf_u(t_flags flags, t_char d, t_tot *tot)
{
	int	i;

	i = 0;
	if (flags.dot == 1 && d.ui == 0)
		return ;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_print(flags.str[i], 1, tot);
		i++;
	}
}

void	ft_u_hub(t_flags flags, t_char d, t_tot *tot)
{
	if ((flags.number == 0 && flags.zemin == 0 && flags.dot == 0)
		|| (flags.number == 0 && flags.zemin != 0 && flags.dot == 0))
		ft_u_001(flags, d, tot);
	else if ((flags.number == 0 && flags.zemin == 0 && flags.dot == 1)
		|| (flags.number != 0 && flags.zemin == 1
			&& flags.dot == 1 && flags.dot_num > flags.number))
		ft_u_001(flags, d, tot);
	else if (flags.number == 0 && flags.zemin == -1 && flags.dot == 1)
		ft_u_001(flags, d, tot);
	else if ((flags.number != 0 && flags.zemin == 0 && flags.dot == 0)
		|| (flags.number != 0 && flags.zemin == -1 && flags.dot == 0))
		ft_u_100_1m10(flags, d, tot);
	else if (flags.number == 0 && flags.zemin == 1 && flags.dot == 1)
		ft_u_111(flags, d, tot);
	else if (flags.number != 0 && flags.zemin == 1 && flags.dot == 0)
		ft_u_110(flags, d, tot);
	else if (flags.number != 0 && flags.zemin == 1 && flags.dot == 1)
		ft_u_111(flags, d, tot);
	else if (flags.number != 0 && flags.zemin != 1 && flags.dot == 1)
		ft_u_101(flags, d, tot);
}

// initiates the variables for the following functions

void	ft_u_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.ui = va_arg(args, unsigned int);
	flags.str = ft_itoa_printf_u(d.ui);
	if (d.ui == 0 && flags.dot == 1)
		d.len = 0;
	else
		d.len = (int)ft_strlen(flags.str);
	ft_u_hub(flags, d, tot);
	free (flags.str);
}
