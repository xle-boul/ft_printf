/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_conditions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:48:28 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/26 14:58:41 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_numbers_in_flags(t_flags *flags)
{
	int	i;
	int	temp;

	i = 0;
	flags->number = ft_atoi(flags->substr);
	if (flags->high_num == 0)
		flags->high_num = flags->number;
	else if (flags->high_num != 0 && flags->high_num < flags->number)
		flags->high_num = flags->number;
	printf("%d %d\n", flags->number, flags->high_num);
}

int	ft_dot_flag(t_flags flags, char *str)
{
	int	i;

	printf("%c\n", *(str - 1 ));
	return (i);
}
