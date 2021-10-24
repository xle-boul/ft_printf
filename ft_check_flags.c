/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:49:21 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/22 21:29:51 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* checks if a given string matches the char -> libprntf.h */

int	ft_what_char(char c)
{
	t_char	i;

	i.i = 0;
	while (CHARS[i.i])
	{
		if (CHARS[i.i] == c)
		{
			return (0);
		}
		i.i++;
	}
	return (-1);
}

/* checks if a given string matches the flags -> libprntf.h */

int	ft_what_flag(char c)
{
	t_char	j;

	j.i = 0;
	while (FLAGS[j.i])
	{
		if (FLAGS[j.i] == c)
		{
			return (0);
		}
		j.i++;
	}
	return (-1);
}

/* checks if a given string matches the flags -> libprntf.h */

int	ft_what_flag_short(char c)
{
	t_char	j;

	j.i = 0;
	while (FLAGS_SHORT[j.i])
	{
		if (FLAGS_SHORT[j.i] == c)
		{
			return (0);
		}
		j.i++;
	}
	return (-1);
}
