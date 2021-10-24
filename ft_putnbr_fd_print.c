/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:47:22 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/24 23:57:20 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* putnbr but chose on which file descriptor it is printed */

void	ft_putnbr_fd_print(int n, int fd, t_tot *tot)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		tot->n++;
	}
	nb = n;
	if (nb >= 10)
		ft_putnbr_fd_print(nb / 10, fd, tot);
	ft_putchar_fd_print(nb % 10 + 48, fd, tot);
}
