# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:54:09 by xle-boul          #+#    #+#              #
#    Updated: 2021/10/23 23:46:28 by xle-boul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c		\
ft_putnbr_base_fd.c 	\
ft_printf_c.c			\
ft_printf_di.c			\
ft_printf_s.c			\
ft_printf_u.c			\
ft_printf_x.c			\
ft_printf_cap_x.c		\
ft_printf_p.c			\
ft_parse_flags.c		\
ft_check_flags.c		\
ft_hub.c				\
ft_putnbr_fd_print.c	\
ft_putchar_fd_print.c


NAME = ft_printf

CC = gcc

CC_FLAGS = -Werror -Wall -Wextra

LIB = ./libft/libft.a

$(NAME):
	@$(CC) $(SRCS) $(LIB)

all: $(NAME)

fclean:
	rm $(NAME)

re: fclean re