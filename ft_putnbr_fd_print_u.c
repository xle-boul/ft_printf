/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_print_u.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:54:06 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 23:57:59 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* putnbr but chose on which file descriptor it is printed */

void	ft_putnbr_fd_print_u(unsigned int n, int fd, t_tot *tot)
{
	unsigned int	nb;

	nb = n;
	if (nb >= 10)
		ft_putnbr_fd_print_u(nb / 10, fd, tot);
	ft_putchar_fd_print(nb % 10 + 48, fd, tot);
}
