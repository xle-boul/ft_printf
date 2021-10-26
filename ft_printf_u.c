/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:40:23 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/26 12:10:18 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_printf_u(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	c.ui = va_arg(args, unsigned int);
	ft_putnbr_fd_print_u(c.ui, 1, tot);
}
