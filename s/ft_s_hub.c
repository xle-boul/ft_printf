/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_hub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:48:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/09 16:01:40 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libprintf.h"

// this function trims the argument to the proper size, according to
// precision's value. makes it easier to then print

char	*ft_s_trimmer(t_flags flags, t_tot *tot)
{
	char	*dotstr;

	dotstr = (char *)malloc(sizeof(char) * (flags.dot_num + 1));
	if (!dotstr)
		return (NULL);
	ft_strlcpy(dotstr, flags.str, (flags.dot_num + 1));
	return (dotstr);
}

// this function redirects to the proper printing function, depending
// on different cases

void	ft_s_hub(t_flags flags, va_list args, t_tot *tot)
{
	char	*s;

	flags.str = va_arg(args, char *);
	if (flags.dot == 1)
		s = ft_s_trimmer(flags, tot);
	if (flags.number == 0)
		ft_s_number_is_zero(flags, tot, s);
	else if (flags.number != 0 && flags.dot == 0 && flags.zemin == 0)
		ft_s_num_flags_0(flags, tot, s);
	else if (flags.number != 0 && flags.dot == 0 && flags.zemin == 1)
		ft_s_num_dot_0_min_1(flags, tot, s);
	else if (flags.number != 0 && flags.dot == 1 && flags.zemin == 0)
		ft_s_num_dot_1_min_0(flags, tot, s);
	else if (flags.number != 0 && flags.dot == 1 && flags.zemin == 1)
		ft_s_num_dot_1_min_1(flags, tot, s);
	if (flags.dot == 1)
		free(s);
}
