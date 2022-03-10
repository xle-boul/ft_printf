/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:39:20 by xle-boul          #+#    #+#             */
/*   Updated: 2022/03/03 19:26:57 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/ft_printf.h"

/* assigns values to struct i according to flags */

void	ft_manage_flags(va_list args, t_flags flags, t_tot *tot)
{
	while (ft_what_char(*flags.substr) != 0)
	{
		if (*flags.substr == '.')
		{
			flags.dot = 1;
			if (ft_isdigit(*(flags.substr + 1)) == 1)
			{			
				ft_numbers_in_flags(&flags);
				while (ft_isdigit(*(flags.substr + 1)) == 1)
					flags.substr++;
			}
		}
		else if (ft_isdigit(*flags.substr) == 1 && *flags.substr != '0')
		{
			ft_numbers_in_flags(&flags);
			while (ft_isdigit(*(flags.substr + 1)) == 1)
				flags.substr++;
		}
		else
			ft_flags_conditions(&flags);
		flags.substr++;
	}
	flags.param = *flags.substr;
	ft_hub(flags, args, tot);
}

// initiates the structure to store flags values

void	ft_init_struct(char *str, va_list args, t_tot *tot)
{
	t_flags	flags;

	flags.substr = str;
	flags.dot = 0;
	flags.number = 0;
	flags.zemin = 0;
	flags.spaplus = 0;
	flags.param = 0;
	flags.square = 0;
	flags.dot_num = 0;
	ft_manage_flags(args, flags, tot);
}

/* copies flags to a new string in order to manage them through fction */

void	ft_isolate_flags(const char *c, int len, va_list args, t_tot *tot)
{
	t_char	l;

	l.i = 0;
	if (len > 0)
		l.str = (char *)malloc(sizeof(char) * (len + 1));
	else if (len == 0)
		l.str = (char *)malloc(sizeof(char) * 2);
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
		n.ct = 0;
		if (*c == '%')
		{
			c++;
			while (ft_what_all(*c) == 0 && ft_what_char(*c) != 0)
			{
				n.ct++;
				c++;
			}
			ft_isolate_flags((c - n.ct), (n.ct), args, tot);
		}
		else
		{
			ft_putchar_fd_print(*c, 1, tot);
		}
		c++;
	}
}
