/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:46:20 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/06 21:08:25 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/* receives the args and sends them in the hub. prints the string if no args */

int	ft_printf(const char *c, ...)
{
	va_list	args;
	t_tot	tot;

	tot.n = 0;
	va_start (args, c);
	ft_parse_string(c, args, &tot);
	va_end (args);
	return (tot.n);
}

void	ft_print_if_fields_wrong_order(t_flags flags, t_tot *tot)
{
	int	i;

	i = 0;
	ft_putchar_fd_print('%', 1, tot);
	while (ft_what_char(flags.substr[i]) != 0 && flags.substr[i] != '\0')
	{
		ft_putchar_fd_print(flags.substr[i], 1, tot);
		i++;
	}
	ft_putchar_fd_print(flags.substr[i], 1, tot);
}

int main()
{
	// char	n[] = "cacasurtondoigt";
	int		n = 45422;
	
	printf("\n%d", ft_printf("la valeur que l'on recherche est: %s %d", "cacasurtondoigt", n));
	printf("\n--------\n");
	printf("\n%d\n", printf("%12d$", n));
	return (0);
}
