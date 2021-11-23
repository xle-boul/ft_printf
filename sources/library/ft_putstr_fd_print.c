/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:36:09 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 14:54:15 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

/* putstr with a given file descriptor */

void	ft_putstr_fd_print(char *s, int fd, size_t len, t_tot *tot)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ft_putchar_fd_print(*s, fd, tot);
		i++;
		s++;
	}
}
