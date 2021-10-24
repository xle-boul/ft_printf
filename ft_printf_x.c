/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:48:44 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 23:39:26 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_x(t_flags flags, va_list args, t_tot *tot, char *str)
{
	t_char	c;

	c.li = va_arg(args, long int);
	ft_putnbr_base_low_fd(c.li, 16, 1, tot);
}
