/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:09:52 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 11:40:00 by xle-boul         ###   ########.fr       */
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
	if (flags.param == 'x' || flags.param == 'X')
		ft_x_setup(flags, args, tot);
	if (flags.param == 'u')
		ft_u_setup(flags, args, tot);
	if (flags.param == 'p')
		ft_p_setup(flags, args, tot);
	if (flags.param == 'd' || flags.param == 'i')
		ft_di_setup(flags, args, tot);
}
