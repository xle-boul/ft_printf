/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:32:51 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/21 12:38:17 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/* fonction to write a char on the chosen file descriptor */

void	ft_putchar_fd_print(char c, int fd, t_tot *tot)
{
	write (fd, &c, 1);
	tot->n++;
}
