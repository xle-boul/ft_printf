/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:39:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/25 00:02:26 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* assigns values to struct i according to flags */

void	ft_manage_flags(char *str, va_list args, t_flags flags, t_tot *tot)
{
	while (ft_what_char(*str) != 0)
	{
		if (*str == '.')
			flags.dot = 1;
		if (*str == '0' && ft_isdigit(*(str - 1)) != 1 && flags.zemin != 1)
			flags.zemin = -1;
		if (*str == '-')
			flags.zemin = 1;
		if (*str == ' ' && flags.spaplus != 1)
			flags.spaplus = -1;
		if (*str == '+')
			flags.spaplus = 1;
		if (*str == '#')
			flags.square = 1;
		if (ft_isdigit(*str) == 1 && *str != 0)
		{
			flags.number = ft_atoi(str);
			while (ft_isdigit(*(str + 1)) == 1)
				str++;
		}
		str++;
	}
	flags.param = *str;
	printf("dot = %d\nzero(-1)/minus(1) = %d\nspace(-1)/plus(1) = %d\nnumber = %d\nsquare = %d\nparam = %c\n", flags.dot, flags.zemin, flags.spaplus, flags.number, flags.square, flags.param);
	ft_hub(flags, args, tot, str);
}

void	ft_init_struct(char *str, va_list args, t_tot *tot)
{
	t_flags	flags;

	flags.dot = 0;
	flags.minus = 0;
	flags.number = 0;
	flags.zemin = 0;
	flags.spaplus = 0;
	flags.param = 0;
	flags.square = 0;
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