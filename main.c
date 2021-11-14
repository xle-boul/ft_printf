/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:05:13 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/14 11:39:24 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>
#include <limits.h>
int print_result(int x, int y)
{
  if (x == y)
  {
    printf("return_value ->\e[42m~OK~\e[0m\n");
    return (1);
  }
  else
  {
    printf("return_value ->\e[45m..KO..\e[0m \n");
    return (0);
  }
}

int main(void)
{
    int x;
    int y;
    char * str = "yolo";
    char * strb = "pierre qui roule n'amasse pas mousse";
    // printf("-------%%--------- \n");
    // x = ft_printf("FT %% \n");
    // y = printf("SY %% \n");
    // print_result(x,y);
    // printf("\n");

    // printf("-------i--------- \n");
    // x = ft_printf("FT %i %i %i\n", 2147483647, -2147483647, 0);
    // y = printf("SY %i %i %i\n", 2147483647, -2147483647, 0);
    // print_result(x,y);
    // printf("\n");

    // printf("-------d--------- \n");
    // x = ft_printf("FT %d %d %d\n", 2147483647, -2147483647, 0);
    // y = printf("SY %d %d %d\n", 2147483647, -2147483647, 0);
    // print_result(x,y);
    // printf("\n");

    printf("-------s--------- \n");
    x = ft_printf("SY |%s| |%s| \n", str, NULL);
    y = printf("SY |%s| |%s| \n", str, NULL);
    print_result(x,y);
    printf("\n");

    printf("-------s--------- \n");
    x = ft_printf("FT |%s| |%s| \n", str, "");
    y = printf("SY |%s| |%s| \n", str, "");
    print_result(x,y);
    printf("\n");

    // printf("-------u--------- \n");
    // x = ft_printf("FT %u %u \n", -1, 500);
    // y = printf("SY %u %u \n", -1, 500);
    // print_result(x,y);
    // printf("\n");

    // printf("-------p--------- \n");
    // x = ft_printf("FT |%p| |%p| \n", str, strb);
    // y = printf("SY |%p| |%p| \n", str, strb);
    // print_result(x,y);
    // printf("\n");

    // printf("-------p--------- \n");
    // x = ft_printf("FT |%p| |%p| \n", NULL, NULL);
    // y = printf("SY |%p| |%p| \n", NULL, NULL);
    // print_result(x,y);
    // printf("\n");

    // printf("-------x--------- \n");
    // x = ft_printf("FT %x %x \n", 124, -124);
    // y = printf("SY %x %x \n", 124, -124);
    // print_result(x,y);
    // printf("\n");

    // printf("-------X--------- \n");
    // x = ft_printf("FT %X \n",  -1);
    // y = printf("SY %X \n", -1);
    // print_result(x,y);
    // printf("\n");

    //     printf("-------X--------- \n");
    // x = ft_printf("FT %X \n",  INT_MIN);
    // y = printf("SY %X \n", INT_MIN);
    // print_result(x,y);
    // printf("\n");

    //     printf("-------X--------- \n");
    // x = ft_printf("FT %X \n",  INT_MAX);
    // y = printf("SY %X \n", INT_MAX);
    // print_result(x,y);
    // printf("\n");

    //         printf("-------X--------- \n");
    // x = ft_printf("FT %X \n",  INT_MIN - 1);
    // y = printf("SY %X \n", INT_MIN - 1);
    // print_result(x,y);
    // printf("\n");

    //     printf("-------X--------- \n");
    // x = ft_printf("FT %X \n",  INT_MAX + 1);
    // y = printf("SY %X \n", INT_MAX + 1);
    // print_result(x,y);
    // printf("\n");

    // printf("-------c--------- \n");
    // x = ft_printf("FT %c %c %c\n", 'c', 'l', 'w');
    // y = printf("SY %c %c %c\n", 'c', 'l', 'w');
    // print_result(x,y);
    // printf("\n");

    // printf("-------c--------- \n");
    // x = ft_printf("FT %c %c %c\n", 12, 45, 23);
    // y = printf("SY %c %c %c\n", 12, 45, 23);
    // print_result(x,y);
    // printf("\n");

    // printf("-------c--------- \n");
    // x = ft_printf("FT %c %i %c\n", 12, 45, 23);
    // y = printf("SY %c %i %c\n", 12, 45, 23);
    // print_result(x,y);
    // printf("\n");

    //     printf("-------c--------- \n");
    // x = ft_printf("FT %X %i %c\n", 12, 45, 23);
    // y = printf("SY %X %i %c\n", 12, 45, 23);
    // print_result(x,y);
    // printf("\n");

    //     printf("-------c--------- \n");
    // x = ft_printf("FT %u %i %d\n", 12, 45, 23);
    // y = printf("SY %u %i %d\n", 12, 45, 23);
    // print_result(x,y);
    // printf("\n");
}