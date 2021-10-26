/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:49:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/10/26 14:49:05 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <stdarg.h>

# define CHARS "cspdiuxX%"
# define FLAGS ".0123456789# +-"
# define FLAGS_SHORT ".-0 +#"

typedef struct s_tot
{
	int	n;
}			t_tot;
typedef struct s_char
{
	int					i;
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
	char	minus;
	char	dot;
	int		number;
	int		high_num;
	char	param;
	int		square;
	char	*substr;
}				t_flags;

void	ft_printf_cap_x(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_x(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_di(t_flags flags, va_list args, t_tot *tot);
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
int		ft_what_flag_short(char c);
void	ft_hub(t_flags flags, va_list args, t_tot *tot);
void	ft_putnbr_base_cap_fd(long int n, int base, int fd, t_tot *tot);
void	ft_putnbr_base_low_fd(long int n, int base, int fd, t_tot *tot);
void	ft_putnbr_fd_print(int n, int fd, t_tot *tot);
void	ft_putchar_fd_print(char c, int fd, t_tot *tot);
void	ft_putstr_fd_print(char *s, int fd, size_t len, t_tot *tot);
void	ft_putnbr_fd_print_u(unsigned int n, int fd, t_tot *tot);
void	ft_numbers_in_flags(t_flags *flags);


#endif