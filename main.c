/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:06:34 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 16:23:18 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libprintf.h"

int main()
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	

	printf("fake = %d\ntrue = %d\n\n", ft_printf("Simple input test\n"), printf("Simple input test\n")); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("1|%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j), printf("1|%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("2|%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d), printf("2|%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("3|%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d), printf("3|%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("4|%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d), printf("4|%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("5|%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d), printf("5|%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("6|%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d), printf("6|%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("7|%5i, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d), printf("7|%5i, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("8|%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d), printf("8|%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("9|%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d), printf("9|%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("10|%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d), printf("10|%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("11|%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d), printf("11|%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("13|%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d), printf("13|%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("14|%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d), printf("14|%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("15|%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d), printf("15|%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("16|%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d), printf("16|%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("17|%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d), printf("17|%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("18|%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d), printf("18|%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("19|%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d), printf("19|%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("20|%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d), printf("20|%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("21|%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d\n", i, j, k, l, m, c, e, d), printf("21|%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("22|%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d), printf("22|%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("23|%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d), printf("23|%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("24|%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d), printf("24|%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("25|%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d), printf("25|%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("26|%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d), printf("26|%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("27|%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d\n", i, j, k, l, m, c, e, d), printf("27|%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("28|%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d), printf("28|%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("29|%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d), printf("29|%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("30|%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d), printf("30|%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("31|%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d), printf("31|%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("32|%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d), printf("32|%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d)); //
	a = 19;
	b = 14;
	printf("fake = %d\ntrue = %d\n\n", ft_printf("33|%12.12i, %12.12d\n", -42, 42), printf("33|%12.12i, %12.12d\n", -42, 42)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("34|%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r), printf("34|%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("35|%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r), printf("35|%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("36|%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r), printf("36|%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("37|%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r), printf("37|%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("38|%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r), printf("38|%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("39|%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r), printf("39|%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("40|%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r), printf("40|%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("41|%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r), printf("41|%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r)); //6
	printf("fake = %d\ntrue = %d\n\n", ft_printf("42|%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r), printf("42|%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r)); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("43|%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e), printf("43|%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e)); //4
    printf("fake = %d\ntrue = %d\n\n", ft_printf("(null)\n"), printf("(null)\n")); //
	printf("fake = %d\ntrue = %d\n\n", ft_printf("\n"), printf("\n")); //
}