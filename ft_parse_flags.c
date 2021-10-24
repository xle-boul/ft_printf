/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:39:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/23 23:46:59 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* assigns values to struct i according to flags */

void	ft_manage_flags(char *str, va_list args, t_flags flags, t_tot *tot)
{
	if (ft_what_char(*str) == 0)
		flags.param = *str;
	else
	{
		while (ft_what_flag_short(*str) == 0)
		{
			if (*str == '.')
				flags.dot = 1;
			if (*str == '-')
				flags.minus = 1;
			if (*str == '*')
				flags.star = 1;
			if (*str == '0')
				flags.zero = 1;
			str++;
		}
		if (ft_what_flag(*str) != 0 && ft_what_char != 0)
			return ;
		flags.number = ft_atoi(str);
		while (ft_what_flag(*str) == 0)
			str++;
		flags.param = *str;
	}
	ft_hub(flags, args, tot);
}

void	ft_init_struct(char *str, va_list args, t_tot *tot)
{
	t_flags	flags;

	flags.dot = 0;
	flags.minus = 0;
	flags.number = 0;
	flags.star = 0;
	flags.zero = 0;
	flags.param = 0;
	flags.total = 0;
	ft_manage_flags(str, args, flags, tot);
}

/* copies flags to a new string in order to manage them through fction */

void	ft_isolate_flags(const char *c, int len, va_list args, t_tot *tot)
{
	t_char	l;

	l.i = 0;
	l.str = (char *)malloc(sizeof(char) * (len + 1));
	if (!l.str)
		return ;
	while (l.i <= len)
	{
		l.str[l.i] = c[l.i];
		l.i++;
	}
	l.str[l.i] = '\0';
	ft_init_struct(l.str, args, tot);
	free(l.str);
}

/* goes through the string and sends flags bits to management fction */

void	ft_parse_string(const char *c, va_list args, t_tot *tot)
{
	t_char	n;

	while (*c != '\0')
	{
		n.count = 0;
		if (*c == '%')
		{
			c++;
			while (ft_what_flag(*c) == 0 && ft_what_char(*c) != 0)
			{
				n.count++;
				c++;
			}
			ft_isolate_flags((c - n.count), (n.count + 1), args, tot);
		}
		else
		{
			ft_putchar_fd_print(*c, 1, tot);
		}
		c++;
	}
}
