/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fields_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:26:13 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/05 21:42:31 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_fields_hub(t_flags flags, t_flags swtch, va_list args, t_tot *tot)
{
	if (ft_fields_number(flags, swtch, tot) == 0)
		ft_manage_flags(args, flags, tot);
	else
		ft_print_if_fields_wrong_order(flags, tot);
}

int	ft_fields_dot(t_flags flags, t_flags swtch, t_tot *tot)
{
	return (0);
}

int	ft_fields_number(t_flags flags, t_flags swtch, t_tot *tot)
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
