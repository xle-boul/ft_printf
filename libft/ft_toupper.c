/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:33:13 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/17 15:47:52 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* converts a lowercase letter to its capital counterpart */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return ((c - 32));
	else
		return (c);
}
