/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:32:51 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/05 12:40:07 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* fonction to write a char on the chosen file descriptor */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
