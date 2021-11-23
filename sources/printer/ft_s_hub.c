/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_hub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:48:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 15:01:06 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

void	ft_s_printf_basic(t_flags flags, t_tot *tot)
{
	t_char	c;

	c.i = 0;
	while (c.i < (int)ft_strlen(flags.str))
	{
		ft_putchar_fd_print(flags.str[c.i], 1, tot);
		c.i++;
	}
}

void	ft_s_setup(t_flags flags, va_list args, t_tot *tot)
{
	flags.str = va_arg(args, char *);
	if (!flags.str)
	{
		flags.str = malloc(sizeof(char) * 7);
		ft_strlcpy(flags.str, "(null)", 7);
		ft_s_printf_basic(flags, tot);
		free (flags.str);
	}
	else
	{
		ft_s_printf_basic(flags, tot);
	}
}
