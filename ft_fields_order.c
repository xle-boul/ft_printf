/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fields_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:26:13 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/07 11:54:10 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_fields_hub(t_flags flags, va_list args, t_tot *tot)
{
	int	i;

	i = 0;
	while (ft_what_char(flags.substr[i]) != 0)
		i++;
	if (flags.substr[i] == 's')
		ft_manage_flags(args, flags, tot);
	else if (ft_fields_order(flags, tot) == 0)
		ft_manage_flags(args, flags, tot);
	else
		ft_print_if_fields_wrong_order(flags, args, tot);
}

int	ft_fields_order(t_flags flags, t_tot *tot)
{
	int	i;

	i = 0;
	while (ft_what_flag(flags.substr[i]) == 0)
		i++;
	if (ft_what_number(flags.substr[i]) == 1 && flags.substr[i] != '.')
		return (1);
	if (ft_what_number(flags.substr[i]) == 0)
		i++;
	while (ft_isdigit(flags.substr[i]) == 1)
		i++;
	if (ft_what_char(flags.substr[i]) != 0 && flags.substr[i] != '.')
		return (1);
	if (flags.substr[i] == '.')
		i++;
	while (ft_isdigit(flags.substr[i]) == 1)
		i++;
	if (ft_what_char(flags.substr[i]) != 0)
		return (1);
	return (0);
}
