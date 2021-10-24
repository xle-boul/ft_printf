/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:48:53 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 12:43:20 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_p(t_flags flags, va_list args, t_tot *tot, char *str)
{
	t_char	c;

	c.lui = va_arg(args, long int);
	ft_putstr_fd("0x", 1);
	tot->n += 2;
	ft_putnbr_base_low_fd(c.lui, 16, 1, tot);
}
