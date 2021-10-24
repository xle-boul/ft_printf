/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:36:09 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 14:15:36 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* putstr with a given file descriptor */

void	ft_putstr_fd_print(char *s, int fd, t_tot *tot)
{
	while (*s)
	{
		ft_putchar_fd_print(*s, fd, tot);
		s++;
	}
}
