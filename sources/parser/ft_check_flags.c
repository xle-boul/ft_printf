/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:49:21 by xle-boul          #+#    #+#             */
/*   Updated: 2022/03/07 10:56:22 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

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

/* checks if a given string matches numbers from 1-9 -> libprntf.h */

int	ft_what_number(char c)
{
	t_char	j;

	j.i = 0;
	while (NUMBERS[j.i])
	{
		if (NUMBERS[j.i] == c)
		{
			return (0);
		}
		j.i++;
	}
	return (-1);
}

// checks if a given string matches all diff flags and numbers -> libprntf.h

int	ft_what_all(char c)
{
	t_char	j;

	j.i = 0;
	while (ALL[j.i])
	{
		if (ALL[j.i] == c)
		{
			return (0);
		}
		j.i++;
	}
	return (-1);
}
