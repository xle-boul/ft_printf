# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:54:09 by xle-boul          #+#    #+#              #
#    Updated: 2021/10/25 13:49:58 by xle-boul         ###   ########.fr        #
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
ft_putchar_fd_print.c	\
ft_putstr_fd_print.c	\


NAME = ft_printf

CC = gcc

CC_FLAGS = -Werror -Wall -Wextra

LIB_DIR = ./libft/
LIB = libft.a
LIB_SRC = $(LIB_DIR)*.c
LIB_OBJS_DIR = $(LIB_DIR)objs/
LIB_OBJS = $(LIB_SRC:.c=.o)
LIB_OBJECTS_PREFIXED = $(addprefix $(LIB_OBJS_DIR), $(LIB_OBJS))


$(NAME):
	@$(CC) $(SRCS) $(LIB)

all: $(NAME)

create_libft:
	@mkdir -p $(LIB_OBJS_DIR)
	@echo "compling $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@ar r $(NAME) $(LIB_OBJECTS_PREFIXED)
	@echo "$(LIB), created!"

fclean:
	rm $(NAME)

re: fclean re