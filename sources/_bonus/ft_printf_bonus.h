/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:49:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/11/23 16:40:03 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "../../header/ft_printf.h"

void	ft_printf_x(t_flags flags, t_char d, t_tot *tot);
void	ft_printf_di(t_flags flags, t_char d, t_tot *tot);
void	ft_printf_p(t_flags flags, t_tot *tot);
void	ft_printf_s(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_u(t_flags flags, t_char d, t_tot *tot);
void	ft_c_setup(t_flags flags, va_list args, t_tot *tot);
void	ft_printf_c_bonus(t_flags flags, t_char c, t_tot *tot);
void	ft_s_hub(t_flags flags, t_tot *tot);
void	ft_s_number_is_zero(t_flags flags, t_tot *tot, char *dot);
void	ft_s_num_flags_0(t_flags flags, t_tot *tot);
void	ft_s_num_dot_0_min_1(t_flags flags, t_tot *tot, char *dot);
void	ft_s_num_dot_1_min_0(t_flags flags, t_tot *tot, char *dot);
void	ft_s_num_dot_1_min_1(t_flags flags, t_tot *tot, char *dot);
void	ft_di_hub(t_flags flags, t_char d, t_tot *tot);
void	ft_di_001(t_flags flags, t_char d, t_tot *tot);
void	ft_di_100_1m10(t_flags flags, t_char d, t_tot *tot);
void	ft_di_110(t_flags flags, t_char d, t_tot *tot);
void	ft_di_111(t_flags flags, t_char d, t_tot *tot);
void	ft_di_101(t_flags flags, t_char d, t_tot *tot);
void	ft_u_hub(t_flags flags, t_char d, t_tot *tot);
void	ft_u_001(t_flags flags, t_char d, t_tot *tot);
void	ft_u_100_1m10(t_flags flags, t_char d, t_tot *tot);
void	ft_u_110(t_flags flags, t_char d, t_tot *tot);
void	ft_u_111(t_flags flags, t_char d, t_tot *tot);
void	ft_u_101(t_flags flags, t_char d, t_tot *tot);
void	ft_x_hub(t_flags flags, t_char d, t_tot *tot);
void	ft_x_001(t_flags flags, t_char d, t_tot *tot);
void	ft_x_100_1m10(t_flags flags, t_char d, t_tot *tot);
void	ft_x_110(t_flags flags, t_char d, t_tot *tot);
void	ft_x_111(t_flags flags, t_char d, t_tot *tot);
void	ft_x_101(t_flags flags, t_char d, t_tot *tot);
void	ft_p_hub(t_flags flags, t_char d, t_tot *tot);
void	ft_p_001(t_flags flags, t_char d, t_tot *tot);
void	ft_p_100_1m10(t_flags flags, t_char d, t_tot *tot);
void	ft_p_110(t_flags flags, t_char d, t_tot *tot);

#endif