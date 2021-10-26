/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:47:22 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/25 13:51:00 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* putnbr in chosen base but chose on which file descriptor it is printed */

void	ft_putnbr_base_cap_fd(long int n, int base, int fd, t_tot *tot)
{
	long int	nb;

	if (base < 2)
		return (ft_putstr_fd("Error, base too low", 1));
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		tot->n++;
	}
	nb = n;
	if (nb >= (long int)base)
		ft_putnbr_base_cap_fd(nb / base, base, fd, tot);
	if (0 <= (nb % base) && (nb % base) <= 9)
	{
		ft_putchar_fd(nb % base + 48, fd);
		tot->n++;
	}
	else if (nb % base >= 10)
	{
		ft_putchar_fd(nb % base + 55, fd);
		tot->n++;
	}
}

void	ft_putnbr_base_low_fd(long int n, int base, int fd, t_tot *tot)
{
	long int	nb;

	if (base < 2)
		return (ft_putstr_fd("Error, base too low", 1));
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		tot->n++;
	}
	nb = n;
	if (nb >= (long int)base)
		ft_putnbr_base_low_fd(nb / base, base, fd, tot);
	if (0 <= (nb % base) && (nb % base) <= 9)
	{
		ft_putchar_fd(nb % base + 48, fd);
		tot->n++;
	}
	else if (nb % base >= 10)
	{
		ft_putchar_fd(nb % base + 87, fd);
		tot->n++;
	}
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
