/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:49:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:53:43 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <limits.h>

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
	int							i;
	int							j;
	long long unsigned int		lui;
	char						*str;
	int							len;
	char						c;
	unsigned int				ui;
	int							ct;
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

int		ft_printf(const char *c, ...);
void	ft_printf_x(t_flags flags, t_char d, t_tot *tot);
void	ft_printf_di(t_flags flags, t_char d, t_tot *tot);
void	ft_printf_p(t_flags flags, t_tot *tot);
void	ft_printf_s(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_u(t_flags flags, t_char d, t_tot *tot);
void	ft_printf_c(t_flags flags, va_list args, t_tot *tot);
void	ft_c_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_c_basic(t_char c, t_tot *tot);
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
void	ft_putnbase_cap_fd(unsigned long int n, int base, int fd, t_tot *tot);
void	ft_putnbase_low_fd(unsigned long int n, int base, int fd, t_tot *tot);
void	ft_putnbr_fd_print(int n, int fd, t_tot *tot);
void	ft_putchar_fd_print(char c, int fd, t_tot *tot);
void	ft_putstr_fd_print(char *s, int fd, size_t len, t_tot *tot);
void	ft_putnbr_fd_print_u(unsigned int n, int fd, t_tot *tot);
void	ft_numbers_in_flags(t_flags *flags);
void	ft_flags_conditions(t_flags *flags);
void	ft_padding(int s, int start, int stop, t_tot *tot);
int		ft_spaplus(t_flags flags, t_char d, int i, t_tot *tot);
int		ft_square(t_flags flags, t_char d, int i, t_tot *tot);
void	ft_s_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_s_printf_basic(t_flags flags, t_tot *tot);
char	*ft_itoa_printf(int n);
char	*ft_itoa_printf_u(unsigned int n);
char	*ft_itoa_printf_x(unsigned int n, t_char d, t_flags flags);
char	*ft_itoa_printf_p(unsigned long int n, t_char d, t_flags flags);
void	ft_di_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_di_basic(t_flags flags, t_char d, t_tot *tot);
void	ft_u_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_u_basic(t_flags flags, t_char d, t_tot *tot);
void	ft_x_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_x_basic(t_flags flags, t_char d, t_tot *tot);
void	ft_p_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_p_basic(t_flags flags, t_tot *tot);

#endif