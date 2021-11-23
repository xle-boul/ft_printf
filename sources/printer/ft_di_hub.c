/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_hub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:29:42 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

// simple basic printing function for types i and d

void	ft_printf_di_basic(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (d.ct < 0)
		ft_putchar_fd_print('-', 1, tot);
	while (flags.str[d.i] != '\0')
	{
		ft_putchar_fd_print(flags.str[d.i], 1, tot);
		d.i++;
	}
}

void	ft_di_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.ct = va_arg(args, int);
	flags.str = ft_itoa_printf(d.ct);
	d.len = (int)ft_strlen(flags.str);
	ft_printf_di_basic(flags, d, tot);
	free (flags.str);
}
