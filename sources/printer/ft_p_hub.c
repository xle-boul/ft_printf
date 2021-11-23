/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_hub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:39:47 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 15:00:04 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

void	ft_printf_p_basic(t_flags flags, t_tot *tot)
{
	ft_putstr_fd_print("0x", 1, 2, tot);
	ft_printf_p(flags, tot);
}

void	ft_printf_p(t_flags flags, t_tot *tot)
{
	int	i;

	i = 0;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_print(flags.str[i], 1, tot);
		i++;
	}
}

// initiates the variables for the following functions

void	ft_p_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.lui = va_arg(args, unsigned long int);
	flags.str = ft_itoa_printf_p(d.lui, d, flags);
	d.len = (int)ft_strlen(flags.str);
	ft_printf_p_basic(flags, tot);
	free (flags.str);
}
