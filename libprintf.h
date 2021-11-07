/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:49:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/07 16:21:19 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include "libft.h"
# include <stdarg.h>

# define ALL "0# +-123456789."
# define CHARS "cspdiuxX%"
# define FLAGS "0# +-"
# define NUMBERS "123456789"
# define PRECISION "."

typedef struct s_tot
{
	int	n;
}			t_tot;
typedef struct s_char
{
	int					i;
	int					j;
	long unsigned int	lui;
	char				*str;
	char				*c_bis;
	int					len;
	char				c;
	long int			li;
	unsigned int		ui;
	int					count;
}			t_char;
typedef struct s_flags
{
	int		zemin;
	int		spaplus;
	char	dot;
	int		number;
	int		dot_num;
	char	param;
	int		square;
	char	*substr;
	char	*str;
}				t_flags;

void	ft_printf_cap_x(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_x(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_di(t_flags flags, t_tot *tot);
void	ft_printf_p(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_s(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_u(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_c(t_flags flags, va_list args, t_tot *tot);
int		ft_what_char(char c);
int		ft_what_flag(char c);
void	ft_manage_flags(va_list args, t_flags flags, t_tot *tot);
void	ft_isolate_flags(const char *c, int len, va_list args, t_tot *tot);
void	ft_parse_string(const char *c, va_list args, t_tot *tot);
int		ft_what_char(char c);
int		ft_what_flag(char c);
int		ft_what_number(char c);
int		ft_what_all(char c);
void	ft_hub(t_flags flags, va_list args, t_tot *tot);
void	ft_putnbr_base_cap_fd(long int n, int base, int fd, t_tot *tot);
void	ft_putnbr_base_low_fd(long int n, int base, int fd, t_tot *tot);
void	ft_putnbr_fd_print(int n, int fd, t_tot *tot);
void	ft_putchar_fd_print(char c, int fd, t_tot *tot);
void	ft_putstr_fd_print(char *s, int fd, size_t len, t_tot *tot);
void	ft_putnbr_fd_print_u(unsigned int n, int fd, t_tot *tot);
void	ft_numbers_in_flags(t_flags *flags);
void	ft_flags_conditions(t_flags *flags);
void	ft_di_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_s_hub(t_flags flags, va_list args, t_tot *tot);
void	ft_s_number_is_zero(t_flags flags, t_tot *tot, char *dot);
void	ft_s_num_flags_0(t_flags flags, t_tot *tot, char *dot);
void	ft_s_num_dot_0_min_1(t_flags flags, t_tot *tot, char *dot);
void	ft_s_num_dot_1_min_0(t_flags flags, t_tot *tot, char *dot);
void	ft_s_num_dot_1_min_1(t_flags flags, t_tot *tot, char *dot);
char	*ft_itoa_printf(int n);
void	ft_di_hub(t_flags flags, t_char d, t_tot *tot);
void	ft_di_number(t_flags flags, t_char d, t_tot *tot);
void	ft_di_zemin(t_flags flags, t_char d, t_tot *tot);
int		ft_di_spaplus(t_flags flags, t_char d, t_tot *tot);
void	ft_di_precision_1(t_flags flags, t_char d, t_tot *tot);
void	ft_di_precision_2(t_flags flags, t_char d, t_tot *tot);
void	ft_print_if_fields_wrong_order(t_flags flags, va_list args, t_tot *tot);
void	ft_fields_hub(t_flags flags, va_list args, t_tot *tot);
int		ft_fields_order(t_flags flags, t_tot *tot);

#endif