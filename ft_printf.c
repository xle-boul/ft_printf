/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:46:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 15:35:58 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/ft_printf.h"

// receives the args and sends it to the hub

int	ft_printf(const char *c, ...)
{
	va_list	args;
	t_tot	tot;

	tot.n = 0;
	va_start (args, c);
	ft_parse_string(c, args, &tot);
	va_end (args);
	return (tot.n);
}
