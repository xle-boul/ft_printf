/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s_functions_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:17:36 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:41:59 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

// applies the filters if flags.number is equal to 0.
// takes into account flags.dot flag too.

void	ft_s_number_is_zero(t_flags flags, t_tot *tot, char *dot)
{
	t_char	c;

	c.i = 0;
	if (flags.dot == 1)
	{
		if (flags.dot_num == 0)
		{
			return ;
		}
		while (c.i < (int)ft_strlen(dot))
		{
			ft_putchar_fd_print(dot[c.i], 1, tot);
			c.i++;
		}
	}
	if (flags.dot == 0)
	{
		while (c.i < (int)ft_strlen(flags.str))
		{
			ft_putchar_fd_print(flags.str[c.i], 1, tot);
			c.i++;
		}
	}
}

// (flags.number != 0 && flags.dot == 0 && flags.zemin == 0)

void	ft_s_num_flags_0(t_flags flags, t_tot *tot)
{
	t_char	s;

	s.i = -1;
	s.j = -1;
	if (flags.number > (int)ft_strlen(flags.str))
	{
		while (s.i++ < flags.number - ((int)ft_strlen(flags.str) + 1))
			ft_putchar_fd_print(' ', 1, tot);
		while (s.i + s.j++ < (flags.number - 1))
			ft_putchar_fd_print(flags.str[s.j], 1, tot);
	}
	else if (flags.number <= (int)ft_strlen(flags.str))
	{
		while (s.i++ < ((int)ft_strlen(flags.str) - 1))
			ft_putchar_fd_print(flags.str[s.i], 1, tot);
	}
}

// (flags.number != 0 && flags.dot == 0 && flags.zemin == 1)

void	ft_s_num_dot_0_min_1(t_flags flags, t_tot *tot, char *dot)
{
	t_char	s;

	s.i = 0;
	s.j = 0;
	if (flags.number > (int)ft_strlen(flags.str))
	{
		while (s.i < (int)ft_strlen(flags.str))
		{
			ft_putchar_fd_print(flags.str[s.i], 1, tot);
			s.i++;
		}
		while (s.i + s.j < flags.number)
		{
			ft_putchar_fd_print(' ', 1, tot);
			s.j++;
		}
	}
	else if (flags.number <= (int)ft_strlen(flags.str))
		ft_s_number_is_zero(flags, tot, dot);
}

// (flags.number != 0 && flags.dot == 1 && flags.zemin == 0)

void	ft_s_num_dot_1_min_0(t_flags flags, t_tot *tot, char *dot)
{
	t_char	s;

	s.i = 0;
	if (flags.number > (int)ft_strlen(dot))
	{
		while (s.i < flags.number - (int)ft_strlen(dot))
		{
			ft_putchar_fd_print(' ', 1, tot);
			s.i++;
		}
		ft_s_number_is_zero(flags, tot, dot);
	}
	else if (flags.zemin == 0 && flags.number <= (int)ft_strlen(dot))
		ft_s_number_is_zero(flags, tot, dot);
}

// (flags.number != 0 && flags.dot == 1 && flags.zemin == 1)

void	ft_s_num_dot_1_min_1(t_flags flags, t_tot *tot, char *dot)
{
	t_char	s;

	s.i = 0;
	if (flags.number > (int)ft_strlen(dot))
	{
		ft_s_number_is_zero(flags, tot, dot);
		while (s.i < flags.number - (int)ft_strlen(dot))
		{
			ft_putchar_fd_print(' ', 1, tot);
			s.i++;
		}
	}
	else if (flags.number <= (int)ft_strlen(dot))
		ft_s_number_is_zero(flags, tot, dot);
}
