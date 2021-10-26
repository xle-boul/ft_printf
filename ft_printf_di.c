/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/26 12:10:08 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_di(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	c.i = va_arg(args, int);
	ft_putnbr_fd_print(c.i, 1, tot);
}
