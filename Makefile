# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:54:09 by xle-boul          #+#    #+#              #
#    Updated: 2021/11/12 13:40:01 by xle-boul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c						\
./libprintf/ft_putnbase_fd.c 			\
./c/ft_printf_c.c						\
./di/ft_di_hub.c						\
./s/ft_s_hub.c							\
./parser/ft_parse_flags.c				\
./parser/ft_check_flags.c				\
ft_hub.c								\
./libprintf/ft_putchar_fd_print.c		\
./libprintf/ft_putstr_fd_print.c		\
./parser/ft_flags_conditions.c			\
./s/ft_printf_s_functions.c				\
./libprintf/ft_itoa_printf.c			\
./libprintf/ft_itoa_printf_u.c			\
./libprintf/ft_itoa_printf_x.c			\
./di/ft_printf_di_functions.c			\
./u/ft_printf_u_functions.c				\
./u/ft_u_hub.c							\
./x/ft_printf_x_functions.c				\
./x/ft_x_hub.c							\
./p/ft_printf_p_functions.c				\
./p/ft_p_hub.c							\
./libprintf/ft_common_functions.c		\

NAME = ft_printf

CC = gcc

CC_FLAGS = -Werror -Wall -Wextra

LIB_DIR = ./libft/
LIB = libft.a

$(NAME): create_libft
	@$(CC) $(SRCS) $(LIB)

all: $(NAME)

bonus: $(NAME)

create_libft:
	@make $(LIB) -C $(LIB_DIR)
	@cd libft/ && mv $(LIB) ../ && cd ..
	@echo "libft.a moved to parent directory"

clean:
	@cd libft/ && rm -rf objs/ && cd ..
	
fclean: clean
	@rm a.out
	@rm $(LIB)

re: fclean re

.PHONY: $(NAME) all create_libft fclean re