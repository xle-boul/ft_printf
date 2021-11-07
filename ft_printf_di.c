/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/06 21:06:44 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_di(t_flags flags, int d, t_tot *tot)
{
	ft_putnbr_fd_print(d, 1, tot);
}

void	ft_di_hub(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.count = va_arg(args, int);
	flags.str = ft_itoa(d.count);
	if (!flags.str)
		return ;
	if (flags.number == 0 && flags.spaplus == 0 && flags.zemin == 0)
		ft_printf_di(flags, d.count, tot);
	if (flags.number != 0)
		ft_test_di(flags, d, tot);
	free(flags.str);
}
