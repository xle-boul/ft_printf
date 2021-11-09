/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:09:52 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/09 23:16:19 by xle-boul         ###   ########.fr       */
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

// this function prints the proper format if the given fields do not match
// expectancy

void	ft_print_if_fields_wrong_order(t_flags flags, va_list args, t_tot *tot)
{
	int	i;
	int	truc;

	i = 0;
	truc = va_arg(args, int);
	ft_putchar_fd_print('%', 1, tot);
	while (ft_what_char(flags.substr[i]) != 0 && flags.substr[i] != '\0')
	{
		ft_putchar_fd_print(flags.substr[i], 1, tot);
		i++;
	}
	ft_putchar_fd_print(flags.substr[i], 1, tot);
	(void)truc;
}
