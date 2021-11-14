/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:32:51 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 11:48:14 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libprintf.h"

/* fonction to write a char on the chosen file descriptor */

void	ft_putchar_fd_print(char c, int fd, t_tot *tot)
{
	write (fd, &c, 1);
	tot->n++;
}
