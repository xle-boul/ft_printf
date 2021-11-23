/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbase_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:47:22 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 14:54:15 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

/* putnbr in chosen base but choose on which file descriptor it is printed */

void	ft_putnbase_cap_fd(unsigned long int n, int base, int fd, t_tot *tot)
{
	if (base < 2)
		return (ft_putstr_fd("Error, base too low", 1));
	if (n <= 0)
	{
		ft_putchar_fd_print('-', fd, tot);
		n *= -1;
	}
	if (n >= (unsigned long int)base)
		ft_putnbase_cap_fd(n / base, base, fd, tot);
	if ((n % base) <= 9)
		ft_putchar_fd_print(n % base + 48, fd, tot);
	else if (n % base >= 10)
		ft_putchar_fd_print(n % base + 55, fd, tot);
}

void	ft_putnbase_low_fd(unsigned long int n, int base, int fd, t_tot *tot)
{
	if (base < 2)
		return (ft_putstr_fd("Error, base too low", 1));
	if (n <= 0)
	{
		ft_putchar_fd_print('-', fd, tot);
		n *= -1;
	}
	if (n >= (unsigned long int)base)
		ft_putnbase_low_fd(n / base, base, fd, tot);
	if ((n % base) <= 9)
		ft_putchar_fd_print(n % base + 48, fd, tot);
	else if (n % base >= 10)
		ft_putchar_fd_print(n % base + 87, fd, tot);
}

void	ft_putnbr_fd_print_u(unsigned int n, int fd, t_tot *tot)
{
	if (n >= 10)
		ft_putnbr_fd_print_u(n / 10, fd, tot);
	ft_putchar_fd_print(n % 10 + 48, fd, tot);
}

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
