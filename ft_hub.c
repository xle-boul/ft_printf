/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:09:52 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/23 22:31:01 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* redirects to the proper function according to the char given */

void	ft_hub(t_flags flags, va_list args, t_tot *tot)
{
	if (flags.param == 'c' || flags.param == '%')
		ft_printf_c(flags, args, tot);
	if (flags.param == 's' && flags.star == 0)
		ft_printf_s(flags, args, tot);
//	if (flags.param == 's' && flags.star == 1)
//		ft_printf_s_double(flags, args);
	if (flags.param == 'x')
		ft_printf_x(flags, args, tot);
	if (flags.param == 'X')
		ft_printf_cap_x(flags, args, tot);
	if (flags.param == 'u')
		ft_printf_u(flags, args, tot);
	if (flags.param == 'p')
		ft_printf_p(flags, args, tot);
	if (flags.param == 'd' || flags.param == 'i')
		ft_printf_di(flags, args, tot);
}
