/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:22:14 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/19 16:31:47 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;
	char				*str;

	i = 0;
	str = (char *)s;
	if (!str || !f)
		return ;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
