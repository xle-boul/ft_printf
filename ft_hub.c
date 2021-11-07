/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:09:52 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/28 22:47:56 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* redirects to the proper function according to the char given */

void	ft_hub(t_flags flags, va_list args, t_tot *tot)
{
	if (flags.param == 'c' || flags.param == '%')
		ft_printf_c(flags, args, tot);
	if (flags.param == 's')
		ft_s_hub(flags, args, tot);
	if (flags.param == 'x')
		ft_printf_x(flags, args, tot);
	if (flags.param == 'X')
		ft_printf_cap_x(flags, args, tot);
	if (flags.param == 'u')
		ft_printf_u(flags, args, tot);
	if (flags.param == 'p')
		ft_printf_p(flags, args, tot);
	if (flags.param == 'd' || flags.param == 'i')
		ft_di_hub(flags, args, tot);
}
