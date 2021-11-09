# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:54:09 by xle-boul          #+#    #+#              #
#    Updated: 2021/11/09 16:24:04 by xle-boul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c						\
./libprintf/ft_putnbr_base_fd.c 		\
./c/ft_printf_c.c						\
./di/ft_di_hub.c						\
./s/ft_s_hub.c							\
./x/ft_printf_x.c						\
./capX/ft_printf_cap_x.c				\
./p/ft_printf_p.c						\
./parser/ft_parse_flags.c				\
./parser/ft_check_flags.c				\
ft_hub.c								\
./libprintf/ft_putchar_fd_print.c		\
./libprintf/ft_putstr_fd_print.c		\
./parser/ft_flags_conditions.c			\
./s/ft_printf_s_functions.c				\
./libprintf/ft_itoa_printf.c			\
./libprintf/ft_itoa_printf_u.c			\
./di/ft_printf_di_functions.c			\
./u/ft_printf_u_functions.c				\
./u/ft_u_hub.c							\

NAME = ft_printf

CC = gcc

CC_FLAGS = -Werror -Wall -Wextra

LIB_DIR = ./libft/
LIB = libft.a

$(NAME): create_libft
	@$(CC) $(SRCS) $(LIB_DIR)$(LIB)

all: $(NAME)

create_libft:
	@make $(LIB) -C $(LIB_DIR)
	@echo "libft created in $(LIB_DIR)"

fclean:
	rm $(NAME)

re: fclean re