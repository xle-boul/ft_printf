/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/09 16:00:02 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libprintf.h"

void	ft_printf_c(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	c.c = va_arg(args, int);
	ft_putchar_fd_print(c.c, 1, tot);
}
